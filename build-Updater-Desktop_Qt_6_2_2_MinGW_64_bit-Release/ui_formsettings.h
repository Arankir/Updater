/********************************************************************************
** Form generated from reading UI file 'formsettings.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSETTINGS_H
#define UI_FORMSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormSettings
{
public:
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonUnlock;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxAutoRun;
    QCheckBox *checkBoxRunIfClose;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpinBox *spinBoxIntervalCheckApp;
    QPushButton *pushButtonApplyIntervalCheckApp;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *spinBoxIntervalUpdate;
    QPushButton *pushButtonApplyIntervalUpdate;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonRunStandartApp;
    QRadioButton *radioButtonRunTestApp;
    QRadioButton *radioButtonRunLastApp;
    QPushButton *pushButtonRunApp;
    QPushButton *pushButtonCheckUpdate;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBoxUpdate;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditPathLastVersion;
    QPushButton *pushButtonApplyPathLastVersion;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelVersion;
    QPushButton *pushButtonRebootVersion;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxUpdateTestVersion;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditTestPathLastVersion;
    QPushButton *pushButtonApplyTestPathLastVersion;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelTestVersion;
    QPushButton *pushButtonRebootTestVersion;

    void setupUi(QWidget *FormSettings)
    {
        if (FormSettings->objectName().isEmpty())
            FormSettings->setObjectName(QString::fromUtf8("FormSettings"));
        FormSettings->resize(451, 378);
        verticalLayout_3 = new QVBoxLayout(FormSettings);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButtonUnlock = new QPushButton(FormSettings);
        pushButtonUnlock->setObjectName(QString::fromUtf8("pushButtonUnlock"));

        verticalLayout_3->addWidget(pushButtonUnlock);

        tabWidget = new QTabWidget(FormSettings);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBoxAutoRun = new QCheckBox(tab);
        checkBoxAutoRun->setObjectName(QString::fromUtf8("checkBoxAutoRun"));

        verticalLayout->addWidget(checkBoxAutoRun);

        checkBoxRunIfClose = new QCheckBox(tab);
        checkBoxRunIfClose->setObjectName(QString::fromUtf8("checkBoxRunIfClose"));

        verticalLayout->addWidget(checkBoxRunIfClose);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        spinBoxIntervalCheckApp = new QSpinBox(tab);
        spinBoxIntervalCheckApp->setObjectName(QString::fromUtf8("spinBoxIntervalCheckApp"));
        spinBoxIntervalCheckApp->setMinimum(1);
        spinBoxIntervalCheckApp->setMaximum(999999999);
        spinBoxIntervalCheckApp->setSingleStep(1000);

        horizontalLayout_4->addWidget(spinBoxIntervalCheckApp);

        pushButtonApplyIntervalCheckApp = new QPushButton(tab);
        pushButtonApplyIntervalCheckApp->setObjectName(QString::fromUtf8("pushButtonApplyIntervalCheckApp"));

        horizontalLayout_4->addWidget(pushButtonApplyIntervalCheckApp);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        spinBoxIntervalUpdate = new QSpinBox(tab);
        spinBoxIntervalUpdate->setObjectName(QString::fromUtf8("spinBoxIntervalUpdate"));
        spinBoxIntervalUpdate->setMinimum(1);
        spinBoxIntervalUpdate->setMaximum(999999999);
        spinBoxIntervalUpdate->setSingleStep(1000);

        horizontalLayout_3->addWidget(spinBoxIntervalUpdate);

        pushButtonApplyIntervalUpdate = new QPushButton(tab);
        pushButtonApplyIntervalUpdate->setObjectName(QString::fromUtf8("pushButtonApplyIntervalUpdate"));

        horizontalLayout_3->addWidget(pushButtonApplyIntervalUpdate);


        verticalLayout->addLayout(horizontalLayout_3);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButtonRunStandartApp = new QRadioButton(frame_2);
        radioButtonRunStandartApp->setObjectName(QString::fromUtf8("radioButtonRunStandartApp"));
        radioButtonRunStandartApp->setChecked(true);

        verticalLayout_2->addWidget(radioButtonRunStandartApp);

        radioButtonRunTestApp = new QRadioButton(frame_2);
        radioButtonRunTestApp->setObjectName(QString::fromUtf8("radioButtonRunTestApp"));

        verticalLayout_2->addWidget(radioButtonRunTestApp);

        radioButtonRunLastApp = new QRadioButton(frame_2);
        radioButtonRunLastApp->setObjectName(QString::fromUtf8("radioButtonRunLastApp"));

        verticalLayout_2->addWidget(radioButtonRunLastApp);


        verticalLayout->addWidget(frame_2);

        pushButtonRunApp = new QPushButton(tab);
        pushButtonRunApp->setObjectName(QString::fromUtf8("pushButtonRunApp"));

        verticalLayout->addWidget(pushButtonRunApp);

        pushButtonCheckUpdate = new QPushButton(tab);
        pushButtonCheckUpdate->setObjectName(QString::fromUtf8("pushButtonCheckUpdate"));

        verticalLayout->addWidget(pushButtonCheckUpdate);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkBoxUpdate = new QCheckBox(tab_2);
        checkBoxUpdate->setObjectName(QString::fromUtf8("checkBoxUpdate"));

        verticalLayout_5->addWidget(checkBoxUpdate);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditPathLastVersion = new QLineEdit(tab_2);
        lineEditPathLastVersion->setObjectName(QString::fromUtf8("lineEditPathLastVersion"));

        horizontalLayout_2->addWidget(lineEditPathLastVersion);

        pushButtonApplyPathLastVersion = new QPushButton(tab_2);
        pushButtonApplyPathLastVersion->setObjectName(QString::fromUtf8("pushButtonApplyPathLastVersion"));

        horizontalLayout_2->addWidget(pushButtonApplyPathLastVersion);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelVersion = new QLabel(tab_2);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));

        horizontalLayout_5->addWidget(labelVersion);

        pushButtonRebootVersion = new QPushButton(tab_2);
        pushButtonRebootVersion->setObjectName(QString::fromUtf8("pushButtonRebootVersion"));

        horizontalLayout_5->addWidget(pushButtonRebootVersion);


        verticalLayout_5->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkBoxUpdateTestVersion = new QCheckBox(tab_3);
        checkBoxUpdateTestVersion->setObjectName(QString::fromUtf8("checkBoxUpdateTestVersion"));

        verticalLayout_4->addWidget(checkBoxUpdateTestVersion);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEditTestPathLastVersion = new QLineEdit(tab_3);
        lineEditTestPathLastVersion->setObjectName(QString::fromUtf8("lineEditTestPathLastVersion"));
        lineEditTestPathLastVersion->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEditTestPathLastVersion);

        pushButtonApplyTestPathLastVersion = new QPushButton(tab_3);
        pushButtonApplyTestPathLastVersion->setObjectName(QString::fromUtf8("pushButtonApplyTestPathLastVersion"));

        horizontalLayout->addWidget(pushButtonApplyTestPathLastVersion);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelTestVersion = new QLabel(tab_3);
        labelTestVersion->setObjectName(QString::fromUtf8("labelTestVersion"));

        horizontalLayout_6->addWidget(labelTestVersion);

        pushButtonRebootTestVersion = new QPushButton(tab_3);
        pushButtonRebootTestVersion->setObjectName(QString::fromUtf8("pushButtonRebootTestVersion"));

        horizontalLayout_6->addWidget(pushButtonRebootTestVersion);


        verticalLayout_4->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_3->addWidget(tabWidget);


        retranslateUi(FormSettings);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FormSettings);
    } // setupUi

    void retranslateUi(QWidget *FormSettings)
    {
        FormSettings->setWindowTitle(QCoreApplication::translate("FormSettings", "Settings", nullptr));
        pushButtonUnlock->setText(QCoreApplication::translate("FormSettings", "\320\240\320\260\320\267\320\261\320\273\320\276\320\272\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        checkBoxAutoRun->setText(QCoreApplication::translate("FormSettings", "\320\227\320\260\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270", nullptr));
        checkBoxRunIfClose->setText(QCoreApplication::translate("FormSettings", "\320\227\320\260\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265, \320\265\321\201\320\273\320\270 \320\267\320\260\320\272\321\200\321\213\321\202\320\276", nullptr));
        label_2->setText(QCoreApplication::translate("FormSettings", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217 (\320\274\321\201)", nullptr));
        pushButtonApplyIntervalCheckApp->setText(QCoreApplication::translate("FormSettings", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("FormSettings", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\271 (\320\274\321\201)", nullptr));
        pushButtonApplyIntervalUpdate->setText(QCoreApplication::translate("FormSettings", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        radioButtonRunStandartApp->setText(QCoreApplication::translate("FormSettings", "\320\227\320\260\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \320\276\320\261\321\213\321\207\320\275\321\203\321\216 \320\262\320\265\321\200\321\201\320\270\321\216", nullptr));
        radioButtonRunTestApp->setText(QCoreApplication::translate("FormSettings", "\320\227\320\260\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \321\202\320\265\321\201\321\202\320\276\320\262\321\203\321\216 \320\262\320\265\321\200\321\201\320\270\321\216", nullptr));
        radioButtonRunLastApp->setText(QCoreApplication::translate("FormSettings", "\320\227\320\260\320\277\321\203\321\201\320\272\320\260\321\202\321\214 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\321\216\321\216 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\275\321\203\321\216 \320\262\320\265\321\200\321\201\320\270\321\216", nullptr));
        pushButtonRunApp->setText(QCoreApplication::translate("FormSettings", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", nullptr));
        pushButtonCheckUpdate->setText(QCoreApplication::translate("FormSettings", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\276\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("FormSettings", "\320\236\320\261\321\211\320\265\320\265", nullptr));
        checkBoxUpdate->setText(QCoreApplication::translate("FormSettings", "\320\236\320\261\320\275\320\276\320\262\320\273\321\217\321\202\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("FormSettings", "\320\245\321\200\320\260\320\275\320\265\320\275\320\270\320\265 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \320\262\320\265\321\200\321\201\320\270\320\270", nullptr));
        pushButtonApplyPathLastVersion->setText(QCoreApplication::translate("FormSettings", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        labelVersion->setText(QCoreApplication::translate("FormSettings", "none", nullptr));
        pushButtonRebootVersion->setText(QCoreApplication::translate("FormSettings", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\262\320\265\321\200\321\201\320\270\321\216", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("FormSettings", "\320\241\321\202\320\260\320\261\320\270\320\273\321\214\320\275\320\260\321\217 \320\262\320\265\321\200\321\201\320\270\321\217", nullptr));
        checkBoxUpdateTestVersion->setText(QCoreApplication::translate("FormSettings", "\320\236\320\261\320\275\320\276\320\262\320\273\321\217\321\202\321\214 \321\202\320\265\321\201\321\202\320\276\320\262\321\203\321\216 \320\262\320\265\321\200\321\201\320\270\321\216", nullptr));
        label_4->setText(QCoreApplication::translate("FormSettings", "\320\245\321\200\320\260\320\275\320\265\320\275\320\270\320\265 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\271 \321\202\320\265\321\201\321\202\320\276\320\262\320\276\320\271 \320\262\320\265\321\200\321\201\320\270\320\270", nullptr));
        pushButtonApplyTestPathLastVersion->setText(QCoreApplication::translate("FormSettings", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        labelTestVersion->setText(QCoreApplication::translate("FormSettings", "none", nullptr));
        pushButtonRebootTestVersion->setText(QCoreApplication::translate("FormSettings", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \321\202\320\265\321\201\321\202\320\276\320\262\321\203\321\216 \320\262\320\265\321\200\321\201\320\270\321\216", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("FormSettings", "\320\242\320\265\321\201\321\202\320\276\320\262\320\260\321\217 \320\262\320\265\321\200\321\201\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormSettings: public Ui_FormSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSETTINGS_H
