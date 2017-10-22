#-------------------------------------------------
#
# Project created by QtCreator 2017-10-16T23:17:15
#
#-------------------------------------------------

QT       += testlib core

QT       -= gui

TARGET = tst_imageprocessortest
CONFIG   += console c++14
CONFIG   -= app_bundle

TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS IMGPROCTESTS


SOURCES += \
        tst_imageprocessortest.cpp 

DEFINES += SRCDIR=\\\"$$PWD/\\\"
include(../Tests.pri)


contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_EXTRA_LIBS = \
        $$PWD/../../View/DesktopView/android/libopencv_java3.so
}
