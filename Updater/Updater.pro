QT -= gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        downloader.cpp \
        formsettings.cpp \
        main.cpp \
        reestr.cpp \
        task.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    downloader.h \
    formsettings.h \
    reestr.h \
    task.h

RESOURCES += \
    res.qrc

DISTFILES +=
    RC_ICONS = icon.ico

FORMS += \
    formsettings.ui