#-------------------------------------------------
#
# Project created by QtCreator 2013-03-15T14:06:03
#
#-------------------------------------------------

QT       -= gui

TARGET = TrafficLights
TEMPLATE = lib

DEFINES += TRAFFICLIGHTS_LIBRARY

SOURCES +=

HEADERS +=\
    itrafficlight.h \
    lightstatus.h \
    ipedestrianlight.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

OTHER_FILES += \
    Instructions.txt
