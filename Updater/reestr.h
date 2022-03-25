#ifndef REESTR_H
#define REESTR_H

#include <QObject>
#include <QSettings>

class Reestr : public QObject
{
    Q_OBJECT
public:
    static const QString c_organizationName;
    static const QString c_organizationDomain;
    static const QString c_applicationName;

    static bool updating();
    static void setUpdating(bool);
    static bool autoUpdate();
    static void setAutoUpdate(bool);
    static bool runIfClose();
    static void setRunIfClose(bool);
    static bool updateTestVersion();
    static void setUpdateTestVersion(bool);
    static QString updatePath();
    static void setUpdatePath(const QString&);
    static QString updateTestPath();
    static void setUpdateTestPath(const QString&);
    static int intervalUpdate();
    static void setIntervalUpdate(int);
    static int intervalCheckApp();
    static void setIntervalCheckApp(int);
    static QString runApp();
    static void setRunApp(const QString&);
    static QString currentVersion();
    static void setCurrentVersion(const QString&);
    static QString currentTestVersion();
    static void setCurrentTestVersion(const QString&);

signals:

private:
    static QSettings *reestr_;

};

#endif // REESTR_H
