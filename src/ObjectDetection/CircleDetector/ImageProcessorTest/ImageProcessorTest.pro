#-------------------------------------------------
#
# Project created by QtCreator 2017-10-16T23:17:15
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_imageprocessortest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        tst_imageprocessortest.cpp 

DEFINES += SRCDIR=\\\"$$PWD/\\\"
include(../../OPENCVLinking.pro)
