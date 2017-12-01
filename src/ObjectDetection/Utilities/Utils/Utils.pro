#-------------------------------------------------
#
# Project created by QtCreator 2017-10-17T01:03:07
#
#-------------------------------------------------

QT       += gui

TARGET = Utils
TEMPLATE = lib
CONFIG += staticlib

QT  += core
INCLUDEPATH += $$(OPENCV_INCLUDE)
DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    Utilities/utils.cpp

HEADERS += \
    Utilities/utils.h \
    headers.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
include(../../INSTALL_ALL.pri)
include(../../OPENCVLinking.pro)
