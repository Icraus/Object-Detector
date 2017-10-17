#-------------------------------------------------
#
# Project created by QtCreator 2017-10-16T23:20:30
#
#-------------------------------------------------

QT       *= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DesktopView
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        main.cpp \
    View/mainwindow.cpp

HEADERS += \
    View/mainwindow.h \

FORMS += \
        View/MainWindow.ui

include(../../OPENCVLinking.pro)

#message($(IMG_PROC))
LIBS += -L$(IMG_PROC)/CircleDetector/ImageProcessorsStatic/debug \
    -lImageProcessorsStatic
INCLUDEPATH += $(IMG_PROC)/headers \
INCLUDEPATH += $(IMG_PROC)/headers/imgproc \
INCLUDEPATH += $(IMG_PROC)/headers/utils

LIBS += -L$(IMG_PROC)/Utilities/Utils/debug \
 -lUtils
