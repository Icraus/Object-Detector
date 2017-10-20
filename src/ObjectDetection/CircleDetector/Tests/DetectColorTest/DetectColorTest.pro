QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle
include(../Tests.pri)
TEMPLATE = app

SOURCES +=  tst_testwork.cpp
