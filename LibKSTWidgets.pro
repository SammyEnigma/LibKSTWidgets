QT += widgets

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
    databasedriverselect.cpp

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
    widgettypes.h

INCLUDEPATH += ../LibKSTDatabase ../LibKSTSettings
LIBS += -L../LibKSTDatabase -L../LibKSTSettings -lKSTDatabase -lKSTSettings
