#ifndef FORMSETTINGS_H
#define FORMSETTINGS_H

#include <QWidget>
#include <QSettings>

namespace Ui {
class FormSettings;
}

class FormSettings : public QWidget
{
    Q_OBJECT

public:
    explicit FormSettings(QWidget *parent = nullptr);
    ~FormSettings();

signals:
    void s_checkUpdate();
    void s_runApp();
    void s_changedIntervalUpdate(int);
    void s_changedIntervalCheckApp(int);
    void s_changedPathLastVersion(const QString &newPath);
    void s_changedTestPathLastVersion(const QString &newPath);

private slots:
    void on_pushButtonUnlock_clicked();

    void on_checkBoxAutoRun_stateChanged(int arg1);

    void on_checkBoxUpdate_stateChanged(int arg1);

    void on_checkBoxRunIfClose_stateChanged(int arg1);

    void on_pushButtonApplyPathLastVersion_clicked();

    void on_pushButtonCheckUpdate_clicked();

    void on_pushButtonApplyIntervalUpdate_clicked();

    void on_pushButtonApplyIntervalCheckApp_clicked();

    void on_pushButtonRebootVersion_clicked();

    void on_checkBoxUpdateTestVersion_stateChanged(int arg1);

    void on_radioButtonRunStandartApp_clicked();

    void on_radioButtonRunTestApp_clicked();

    void on_radioButtonRunLastApp_clicked();

    void on_pushButtonApplyTestPathLastVersion_clicked();

    void on_pushButtonRebootTestVersion_clicked();

    void on_pushButtonRunApp_clicked();

private:
    Ui::FormSettings *ui;

    void initValues();
};

#endif // FORMSETTINGS_H
