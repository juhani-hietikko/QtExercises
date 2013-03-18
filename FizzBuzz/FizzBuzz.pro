#-------------------------------------------------
#
# Project created by QtCreator 2013-03-18T10:37:27
#
#-------------------------------------------------

QT       -= gui

TARGET = FizzBuzz
TEMPLATE = lib

DEFINES += FIZZBUZZ_LIBRARY

SOURCES += fizzbuzz.cpp

HEADERS += fizzbuzz.h\
        FizzBuzz_global.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
