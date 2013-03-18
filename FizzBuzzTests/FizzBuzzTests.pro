#-------------------------------------------------
#
# Project created by QtCreator 2013-03-18T10:38:43
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = fizzbuzztest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += fizzbuzztest.cpp ../FizzBuzz/fizzbuzz.cpp
HEADERS += ../FizzBuzz/fizzbuzz.h
INCLUDEPATH += ../FizzBuzz/
DEFINES += SRCDIR=\\\"$$PWD/\\\"
