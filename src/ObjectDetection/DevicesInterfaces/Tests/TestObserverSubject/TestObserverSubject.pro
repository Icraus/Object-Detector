#-------------------------------------------------
#
# Project created by QtCreator 2017-10-23T21:39:30
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_testobserversubjecttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        tst_testobserversubjecttest.cpp \ 
    subjectimpl.cpp \
    observerimpl.cpp

DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    subjectimpl.h \
    observerimpl.h

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../build-ObjectDetection-Desktop_Qt_5_9_0_MinGW_32bit-Debug/DevicesInterfaces/DeviceHandler/release/ -lDeviceHandler
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../build-ObjectDetection-Desktop_Qt_5_9_0_MinGW_32bit-Debug/DevicesInterfaces/DeviceHandler/debug/ -lDeviceHandler

INCLUDEPATH += $$PWD/../../DeviceHandler
DEPENDPATH += $$PWD/../../DeviceHandler

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../build-ObjectDetection-Desktop_Qt_5_9_0_MinGW_32bit-Debug/DevicesInterfaces/DeviceHandler/release/libDeviceHandler.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../build-ObjectDetection-Desktop_Qt_5_9_0_MinGW_32bit-Debug/DevicesInterfaces/DeviceHandler/debug/libDeviceHandler.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../build-ObjectDetection-Desktop_Qt_5_9_0_MinGW_32bit-Debug/DevicesInterfaces/DeviceHandler/release/DeviceHandler.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../build-ObjectDetection-Desktop_Qt_5_9_0_MinGW_32bit-Debug/DevicesInterfaces/DeviceHandler/debug/DeviceHandler.lib
