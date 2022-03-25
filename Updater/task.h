#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QTimer>
#include <QProcess>
#include <QDebug>
#include <QSettings>
#include <QSystemTrayIcon>
#include "downloader.h"
#include "formsettings.h"

class Task : public QObject {
    Q_OBJECT
public:
    Task(QObject *parent = nullptr);
    ~Task();

    static bool createDir(const QString &aPath);
public slots:
    void run();
    void loadProgramData();
    int startProgramm();
    void onCloseApp(int exitCode, QProcess::ExitStatus status);
    void checkApp();
    void checkUpdate();
    bool isOldVersion();
    bool isOldTestVersion();
    void update();
    void updateTest();
    bool copyFilesFromDir(const QDir &aDir, const QString &aAppPath);
    QMenu *createTrayIconMenu();

signals:
    void s_finished();
    void s_updateFinished();
    void s_updateTestFinished();

private:
    const QString c_settingsPath_ = "settings.txt";
    const QString c_programPath_ = "program.txt";
    const QString c_programTestPath_ = "programTest.txt";
    QSystemTrayIcon *trayIcon_;

    QString currentAppPath_;
    QString currentAppTestPath_;

    QTimer *timerUpdate_ = nullptr;
    QTimer *timerCheck_ = nullptr;

    QProcess *process_ = nullptr;
    QString programm_;
    QStringList arguments_;
    QString programmTest_;
    QStringList argumentsTest_;

};

#endif // TASK_H
