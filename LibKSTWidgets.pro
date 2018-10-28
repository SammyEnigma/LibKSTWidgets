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
    logindialog.cpp

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
    logindialog.h

INCLUDEPATH += ../LibKSTDatabase ../LibKSTLogger ../LibKSTSettings
LIBS += -L../LibKSTDatabase -L../LibKSTLogger -L../LibKSTSettings -lKSTDatabase -lKSTLogger -lKSTSettings
