#-------------------------------------------------
#
# Project created by QtCreator 2013-03-13T10:27:33
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = langtonsanttests
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += langtonsanttests.cpp ../LangtonsAnt/antgrid.cpp
HEADERS += ../LangtonsAnt/antgrid.h
INCLUDEPATH += ../LangtonsAnt
DEFINES += SRCDIR=\\\"$$PWD/\\\"
