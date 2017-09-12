#-------------------------------------------------
#
# Project created by QtCreator 2017-09-05T20:19:17
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cs4
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    settingrw.cpp \
    tcpservice.cpp

HEADERS  += mainwindow.h \
    settingrw.h \
    tcpservice.h

FORMS    += mainwindow.ui
