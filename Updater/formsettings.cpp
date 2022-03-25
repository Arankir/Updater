#include "formsettings.h"
#include "ui_formsettings.h"
#include <QDir>
#include <QDebug>
#include <QMessageBox>
#include <QStandardPaths>
#include <QInputDialog>
#include "reestr.h"

const QString c_password = "rjrjcs743";

FormSettings::FormSettings(QWidget *parent): QWidget(parent), ui(new Ui::FormSettings) {
    ui->setupUi(this);
    initValues();
    ui->tabWidget->setEnabled(false);
    ui->lineEditPathLastVersion->setEchoMode(QLineEdit::PasswordEchoOnEdit);
}

void FormSettings::initValues() {
    ui->checkBoxAutoRun->setChecked(QFile::exists(QStandardPaths::writableLocation(QStandardPaths::ApplicationsLocation) + "/Startup/updater.lnk"));
    ui->checkBoxUpdate->setChecked(Reestr::autoUpdate());
    ui->checkBoxRunIfClose->setChecked(Reestr::runIfClose());
    ui->checkBoxUpdateTestVersion->setChecked(Reestr::updateTestVersion());
    ui->lineEditPathLastVersion->setText(Reestr::updatePath());
    ui->lineEditTestPathLastVersion->setText(Reestr::updateTestPath());
    ui->spinBoxIntervalUpdate->setValue(Reestr::intervalUpdate());
    ui->spinBoxIntervalCheckApp->setValue(Reestr::intervalCheckApp());

    ui->labelVersion->setText(Reestr::currentVersion());
    ui->labelTestVersion->setText(Reestr::currentTestVersion());

    if (Reestr::runApp() == "Standart") {
        ui->radioButtonRunStandartApp->setChecked(true);
    } else if (Reestr::runApp() == "Test") {
        ui->radioButtonRunTestApp->setChecked(true);
    } else if (Reestr::runApp() == "Last") {
        ui->radioButtonRunLastApp->setChecked(true);
    }
}

FormSettings::~FormSettings() {
    delete ui;
}

void FormSettings::on_pushButtonUnlock_clicked() {
    QString pass = QInputDialog::getText(this, tr("Проверка"), tr("Введите пароль:"), QLineEdit::Password, "");
    if (pass == c_password) {
        ui->tabWidget->setEnabled(true);
    } else {
        QMessageBox::warning(this, tr("Ошибка!"), tr("Неверный пароль!"));
    }
}

void FormSettings::on_checkBoxAutoRun_stateChanged(int arg1) {
    //C:\Users\Pashaoffice\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup
    if (arg1 == 2) {
        if (QFile::link(QApplication::applicationFilePath(), QStandardPaths::writableLocation(QStandardPaths::ApplicationsLocation) + "/Startup/updater.lnk")) {
            qInfo() << "app autorun is enabled" << QApplication::applicationFilePath();
        } else {
            QMessageBox::warning(this, tr("Ошибка!"), tr("Не удалось поставить автозапуск!"));
        }
    } else {
        if (QFile::exists(QStandardPaths::writableLocation(QStandardPaths::ApplicationsLocation) + "/Startup/updater.lnk")) {
            if (QFile::remove(QStandardPaths::writableLocation(QStandardPaths::ApplicationsLocation) + "/Startup/updater.lnk")) {
                qInfo() << "app autorun is disabled";
            } else {
                QMessageBox::warning(this, tr("Ошибка!"), tr("Не удалось удалить автозапуск!"));
            }
        } else {
            QMessageBox::warning(this, tr("Ошибка!"), tr("Автозапуск не установлен!"));
        }
    }
}

void FormSettings::on_checkBoxUpdate_stateChanged(int arg1) {
    Reestr::setAutoUpdate(arg1 == 2);
}

void FormSettings::on_checkBoxRunIfClose_stateChanged(int arg1) {
    Reestr::setRunIfClose(arg1 == 2);
}

void FormSettings::on_pushButtonApplyPathLastVersion_clicked() {
    Reestr::setUpdatePath(ui->lineEditPathLastVersion->text());
    emit s_changedPathLastVersion(ui->lineEditPathLastVersion->text());
}

void FormSettings::on_pushButtonCheckUpdate_clicked() {
    emit s_checkUpdate();
    close();
}

void FormSettings::on_pushButtonApplyIntervalUpdate_clicked() {
    Reestr::setIntervalUpdate(ui->spinBoxIntervalUpdate->value());
}

void FormSettings::on_pushButtonApplyIntervalCheckApp_clicked() {
    Reestr::setIntervalCheckApp(ui->spinBoxIntervalCheckApp->value());
}

void FormSettings::on_pushButtonRebootVersion_clicked() {
    Reestr::setCurrentVersion("none");
    ui->labelVersion->setText(Reestr::currentVersion());
}

void FormSettings::on_checkBoxUpdateTestVersion_stateChanged(int arg1) {
    Reestr::setUpdateTestVersion(arg1 == 2);
}

void FormSettings::on_radioButtonRunStandartApp_clicked() {
    Reestr::setRunApp("Standart");
}

void FormSettings::on_radioButtonRunTestApp_clicked() {
    Reestr::setRunApp("Test");
}

void FormSettings::on_radioButtonRunLastApp_clicked() {
    Reestr::setRunApp("Last");
}

void FormSettings::on_pushButtonApplyTestPathLastVersion_clicked() {
    Reestr::setUpdateTestPath(ui->lineEditTestPathLastVersion->text());
    emit s_changedTestPathLastVersion(ui->lineEditTestPathLastVersion->text());
}

void FormSettings::on_pushButtonRebootTestVersion_clicked() {
    Reestr::setCurrentTestVersion("none");
    ui->labelTestVersion->setText(Reestr::currentTestVersion());
}

void FormSettings::on_pushButtonRunApp_clicked() {
    emit s_runApp();
}
