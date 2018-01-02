CONFIG      += plugin
TARGET      = $$qtLibraryTarget(cvvideocaptureplugin)
TEMPLATE    = lib

HEADERS     = cvvideocaptureplugin.h
SOURCES     = cvvideocaptureplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target
include(../../../COMMON_VARS.pri)
include(cvvideocapture.pri)
