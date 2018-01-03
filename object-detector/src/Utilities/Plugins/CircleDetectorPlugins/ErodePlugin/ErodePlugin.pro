#-------------------------------------------------
#
# Project created by QtCreator 2018-01-02T23:33:35
#
#-------------------------------------------------

QT       -= gui

TARGET = ErodePlugin
TEMPLATE = lib
CONFIG += release plugin

OVERRIDE_INSTALL = TRUE

include(../../../../COMMON_VARS.pri)
include(../../../../OPENCVLinking.pro)

target.files += imageprocessorpluginiface.h

target.path += $$INCLUDE_PATH/ImageProcessorsPlugin
INSTALLS *= target
DESTDIR = $$LIBS_PATH
DLLDESTDIR = $$BIN_PATH/plugins



DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        erodeplugin.cpp

HEADERS += \
        erodeplugin.h \
    imageprocessorpluginiface.h

