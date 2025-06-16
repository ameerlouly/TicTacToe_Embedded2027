QT       += core gui
rola
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    AI_Code.cpp \
    PasswordHash.cpp \
    database.cpp \
    main.cpp \
    mainwindow.cpp \
    mainwindow1.cpp \
    secdialog.cpp \
    sqlite3.c

HEADERS += \
    AItest.h \
    main.h \
    mainwindow.h \
    mainwindow1.h \
    queue.h \
    secdialog.h \
    sqlite3.h \
    sqlite3ext.h

FORMS += \
    mainwindow.ui \
    mainwindow1.ui \
    secdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Graphics/Login Background.png \
    Graphics/Login Graphic-01.png \
    Graphics/Login Graphic-02.png \
    Graphics/Login Graphic.png \
    db/Program_data.db
RESOURCES += \
    images.qrc
