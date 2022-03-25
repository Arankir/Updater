#include "task.h"
#include <QDir>
#include <QCoreApplication>
#include <QAction>
#include <QMenu>
#include <QInputDialog>
#include <QMessageBox>
#include "formsettings.h"
#include "reestr.h"

const QString c_password = "rjrjcs743";

bool Task::createDir(const QString &aPath) {
    bool exist = true;
    QString path = aPath;
    path.replace("\\", "/");
    QStringList dirs = path.split("/");
    if (dirs.last() != "") {
        dirs.removeLast();
    }
    QString pathNow = "";
    for (auto &dir: dirs) {
        pathNow += std::move(dir) + "/";
        exist = (QDir().mkdir(pathNow) && exist);
    }
    return exist;
}

Task::Task(QObject *parent) : QObject(parent), trayIcon_(new QSystemTrayIcon()),
    timerUpdate_(new QTimer(this)), timerCheck_(new QTimer(this)), process_(new QProcess(this)) {
    Reestr::setUpdating(false);
}

Task::~Task() {
    delete trayIcon_;
    delete timerUpdate_;
    delete timerCheck_;
    delete process_;
}

int Task::startProgramm() {
    QString runAppType = Reestr::runApp();
    if (runAppType == "Standart") {
        process_->start(programm_, arguments_);
    } else if (runAppType == "Test") {
        process_->start(programmTest_, argumentsTest_);
    } else if (runAppType == "Last") {
        if (QFileInfo(programm_).lastModified() > QFileInfo(programmTest_).lastModified()) {
            process_->start(programm_, arguments_);
        } else {
            process_->start(programmTest_, argumentsTest_);
        }
    }

    int id = process_->processId();
    if (id > 0) {
        qInfo() << "programm started";
    } else {
        qInfo() << "start programm error";
    }
    return id;
}

void Task::run() {
//    loadSettings();
    qDebug() << QCoreApplication::applicationDirPath() + "/yandex/";
    currentAppPath_ = QCoreApplication::applicationDirPath() + "/yandex/";
    currentAppTestPath_ = QCoreApplication::applicationDirPath() + "/yandexTest/";
    createDir(currentAppPath_);
    createDir(currentAppTestPath_);

    trayIcon_->setIcon(QIcon("://icon.png"));
    trayIcon_->setContextMenu(createTrayIconMenu());
    trayIcon_->show();

    loadProgramData();
    connect(process_, (void(QProcess::*)(int, QProcess::ExitStatus))&QProcess::finished, this, &Task::onCloseApp);
    startProgramm();

    connect(timerCheck_, &QTimer::timeout, this, &Task::checkApp);
    timerCheck_->start(Reestr::intervalCheckApp());
    connect(timerUpdate_, &QTimer::timeout, this, &Task::checkUpdate);
    timerUpdate_->start(Reestr::intervalUpdate());
}

QMenu *Task::createTrayIconMenu() {
    // Setting actions...
    QAction *settingsAction = new QAction("Настройки",       this);
    QAction *quitAction     = new QAction("Выход",           this);

    // Connecting actions to slots...
    connect (settingsAction, &QAction::triggered, this, [=](bool checked) {
        Q_UNUSED(checked);
        FormSettings *settings = new FormSettings();

        connect(settings, &FormSettings::s_checkUpdate, this, [=]() {
            if (isOldVersion()) {
                update();
            } else {
                trayIcon_->showMessage(tr("Внимание!"), tr("Загружена последняя версия!"));
            }
            if (Reestr::updateTestVersion()) {
                if (isOldTestVersion()) {
                    updateTest();
                } else {
                    trayIcon_->showMessage(tr("Внимание!"), tr("Загружена последняя тестовая версия!"));
                }
            }
        });
        connect(settings, &FormSettings::s_changedIntervalCheckApp, this, [=](int interval) {
            timerCheck_->setInterval(interval);
        });
        connect(settings, &FormSettings::s_changedIntervalUpdate, this, [=](int interval) {
            timerUpdate_->setInterval(interval);
        });
        connect(settings, &FormSettings::s_runApp, this, [=]() {
            if (process_->processId() == 0) {
                if (startProgramm()) {
                    QMessageBox::information(0, tr("Успешно!"), tr("Приложение запущено!"));
                } else {
                    QMessageBox::warning(0, tr("Ошибка!"), tr("Приложение уже запущено"));
                }
            } else {
                QMessageBox::warning(0, tr("Ошибка!"), tr("Приложение уже запущено"));
            }
        });

        settings->show();
    });
    connect (quitAction,     &QAction::triggered, this, [=](bool checked) {
        Q_UNUSED(checked);
        QString pass = QInputDialog::getText(0, tr("Вы уверены, что хотите выйти?"), tr("Пароль:"), QLineEdit::Password, "");
        if (pass == c_password) {
            qApp->quit();
        } else {
            QMessageBox::warning(0, tr("Ошибка!"), tr("Пароль введен неверно!"));
        }
    });

    // Setting system tray's icon menu...
    QMenu *trayIconMenu = new QMenu();
    trayIconMenu->addAction(settingsAction);
    trayIconMenu->addAction(quitAction);
    return trayIconMenu;
}

void Task::onCloseApp(int exitCode, QProcess::ExitStatus status) {
    qInfo() << "programm" << (status == QProcess::NormalExit ? "finished" : "crash") << "with code" << exitCode;
    if (Reestr::runIfClose() && !Reestr::updating()) {
        startProgramm();
    }
}

void Task::loadProgramData() {
    QStringList lProgram;
    if (QFile::exists(c_programPath_)) {
        QFile fProgram(c_programPath_);
        if (fProgram.open(QIODevice::ReadOnly)) {
            while(!fProgram.atEnd()) {
                lProgram << QString::fromLocal8Bit(fProgram.readLine()).remove("\r\n").remove("\n");
            }
            fProgram.close();
            qDebug() << lProgram;
            programm_ = lProgram.takeFirst();
            arguments_ = lProgram;
        } else {
            qWarning() << "program file is already open";
        }
    } else {
        qWarning() << "program file not found";
    }

    lProgram.clear();

    if (QFile::exists(c_programTestPath_)) {
        QFile fProgram(c_programTestPath_);
        if (fProgram.open(QIODevice::ReadOnly)) {
            while(!fProgram.atEnd()) {
                lProgram << QString::fromLocal8Bit(fProgram.readLine()).remove("\r\n").remove("\n");
            }
            fProgram.close();
            qDebug() << lProgram;
            programmTest_ = lProgram.takeFirst();
            argumentsTest_ = lProgram;
        } else {
            qWarning() << "program test file is already open";
        }
    } else {
        qWarning() << "program test file not found";
    }
}

void Task::checkApp() {
    qInfo() << "checkApp" << process_->processId() << process_->program();
    if (process_->processId() == 0) {
        startProgramm();
    }
}

void Task::checkUpdate() {
    if (Reestr::autoUpdate() && isOldVersion()) {
        update();
    }
    if (Reestr::updateTestVersion() && isOldTestVersion()) {
        updateTest();
    }
}

bool Task::isOldVersion() {
    QDir dir(Reestr::updatePath());
    QFile serverVersion(dir.absolutePath() + "/version.txt");
    if (serverVersion.open(QFile::ReadOnly)) {
        QString serverVer = QString(serverVersion.readLine()).remove('\r').remove('\n');
        serverVersion.close();
        qDebug() << "s" << serverVer << Reestr::currentVersion();
        if (serverVer == Reestr::currentVersion()) {
            return false;
        } else {
            if (serverVer == "") {
                qWarning() << "network problem";
                return false;
            }
        }
        qInfo() << "curVer:" << Reestr::currentVersion() << "servVer:" << serverVer;
    } else {
        trayIcon_->showMessage(tr("Ошибка!"),tr("Не удается получить доступ к последней версии!"));
        return false;
    }
    return true;
}

bool Task::isOldTestVersion() {
    QDir dir(Reestr::updateTestPath());
    QFile serverTestVersion(dir.absolutePath() + "/version.txt");
    if (serverTestVersion.open(QFile::ReadOnly)) {
        QString serverTestVer = QString(serverTestVersion.readLine()).remove('\r').remove('\n');
        serverTestVersion.close();
        qDebug() << "t" << serverTestVer << Reestr::currentTestVersion();
        if (serverTestVer == Reestr::currentTestVersion()) {
            return false;
        } else {
            if (serverTestVer == "") {
                qWarning() << "network problem";
                return false;
            }
        }
        qInfo() << "curTestVer:" << Reestr::currentTestVersion() << "servTestVer:" << serverTestVer;
    } else {
        trayIcon_->showMessage(tr("Ошибка!"),tr("Не удается получить доступ к последней версии!"));
        return false;
    }
    return true;
}

bool Task::copyFilesFromDir(const QDir &aDir, const QString &aAppPath) {
    bool result = true;
    for (const auto &newFile: aDir.entryInfoList()) {
        if (newFile.fileName() == "." || newFile.fileName() == "..") {
            continue;
        }
        QString newFilePathOnThisPc = aAppPath + newFile.fileName();
        if (newFile.isDir()) {
            createDir(newFilePathOnThisPc + "\\");
            copyFilesFromDir(newFile.absoluteFilePath(), newFilePathOnThisPc + "\\");
        } else {
            if ( QFile::exists(newFilePathOnThisPc) ) {
                if (newFile.lastModified() > QFileInfo(newFilePathOnThisPc).lastModified()) {
                    QFile::remove(newFilePathOnThisPc);
                } else {
                    qWarning() << "copy skip file" << newFilePathOnThisPc;
                    continue;
                }
            }
            if (!QFile::copy(newFile.absoluteFilePath(), newFilePathOnThisPc)) {
                qWarning() << "copy error file" << newFilePathOnThisPc;
                result = false;
            } else {
                qWarning() << "copy complete file" << newFilePathOnThisPc;
            }
        }
    }
    return result;
}

void Task::update() {
    qInfo() << "updating";
    Reestr::setUpdating(true);
    process_->close();
    trayIcon_->showMessage(tr("Внимание!"), tr("Началось обновление приложения!"));
    QDir dir(Reestr::updatePath());
    if (copyFilesFromDir(dir, currentAppPath_)) {
        //update complete
        QFile currentVersion(currentAppPath_ + "/version.txt");
        if(currentVersion.open(QFile::ReadOnly)) {
            Reestr::setCurrentVersion(QString(currentVersion.readLine()).remove('\r').remove('\n'));
            currentVersion.close();
        }

        startProgramm();

        trayIcon_->showMessage(tr("Успешно!"), tr("Обновление завершено успешно!"));
        qInfo() << "update complete";

    } else {
        //update error
        trayIcon_->showMessage(tr("Ошибка!"), tr("Ошибка обновления!"));
        qInfo() << "update error";
    }
    Reestr::setUpdating(false);

//    Downloader *download = new Downloader("ftp:\\\\rindgrid\\Обмен\\Руслан\\Павел\\test\\123.txt","C:\\Users\\Pashaoffice\\Desktop\\123.txt",this);
//    download->getData();
//    connect(download, &Downloader::onReady, this, [=](){qDebug() << 1;});
    emit s_updateFinished();
}

void Task::updateTest() {
    qInfo() << "updating";
    Reestr::setUpdating(true);
    process_->close();
    trayIcon_->showMessage(tr("Внимание!"), tr("Началось обновление тестовой версии приложения!"));
    QDir dir(Reestr::updateTestPath());
    if (copyFilesFromDir(dir, currentAppTestPath_)) {
        //update complete
        QFile currentVersion(currentAppTestPath_ + "/version.txt");
        currentVersion.open(QFile::ReadOnly);
        Reestr::setCurrentTestVersion(QString(currentVersion.readLine()).remove('\r').remove('\n'));
        currentVersion.close();

        startProgramm();

        trayIcon_->showMessage(tr("Успешно!"), tr("Обновление тестовой версии завершено успешно!"));
        qInfo() << "update complete";

    } else {
        //update error
        trayIcon_->showMessage(tr("Ошибка!"), tr("Ошибка обновления тестовой версии!"));
        qInfo() << "update error";
    }
    Reestr::setUpdating(false);

//    Downloader *download = new Downloader("ftp:\\\\rindgrid\\Обмен\\Руслан\\Павел\\test\\123.txt","C:\\Users\\Pashaoffice\\Desktop\\123.txt",this);
//    download->getData();
//    connect(download, &Downloader::onReady, this, [=](){qDebug() << 1;});
    emit s_updateTestFinished();
}
