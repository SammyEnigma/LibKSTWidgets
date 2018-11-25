QT += widgets sql

TARGET = KSTWidgets
TEMPLATE = lib

DEFINES += LIBKSTWIDGETS_LIBRARY

SOURCES += \
    identificationbar.cpp \
    notificationbar.cpp \
    recordview.cpp \
    recordcontent.cpp \
    contactbar.cpp \
    notestab.cpp \
    databasemenu.cpp \
    databasedialog.cpp \
    databasedriverselect.cpp \
    publishermenu.cpp \
    logindialog.cpp \
    publisherdialog.cpp \
    attachmentbox.cpp \
    recordmenu.cpp \
    recorddialog.cpp \
    dialog.cpp \
    selectdialog.cpp

HEADERS += \
        libkstwidgets_global.h \ 
    identificationbar.h \
    notificationbar.h \
    recordview.h \
    recordcontent.h \
    contactbar.h \
    notestab.h \
    databasemenu.h \
    databasedialog.h \
    databasedriverselect.h \
    widgettypes.h \
    publishermenu.h \
    logindialog.h \
    publisherdialog.h \
    attachmentbox.h \
    recordmenu.h \
    recorddialog.h \
    dialog.h \
    selectdialog.h

INCLUDEPATH += ../LibKSTEntities ../LibKSTDatabase ../LibKSTLogger ../LibKSTSettings
LIBS += -L../LibKSTEntities -L../LibKSTDatabase -L../LibKSTLogger -L../LibKSTSettings -lKSTEntities -lKSTDatabase -lKSTLogger -lKSTSettings

win32 {
	CONFIG += skip_target_version_ext
	CONFIG -= debug_and_release debug_and_release_target
}
