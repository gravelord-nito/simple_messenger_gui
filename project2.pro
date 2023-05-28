QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    asly.cpp \
    chatpage.cpp \
    clientprof.cpp \
    main.cpp \
    mainwindow.cpp \
    profuser.cpp \
    setting.cpp \
    signup.cpp \
    welcom.cpp

HEADERS += \
    asly.h \
    chatpage.h \
    clientprof.h \
    mainwindow.h \
    profuser.h \
    setting.h \
    signup.h \
    welcom.h

FORMS += \
    asly.ui \
    chatpage.ui \
    clientprof.ui \
    mainwindow.ui \
    profuser.ui \
    setting.ui \
    signup.ui \
    welcom.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../project/res.qrc \
    project-resources.qrc
