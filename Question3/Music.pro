#-------------------------------------------------
#
# Project created by QtCreator 2023-05-02T14:08:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Music
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    musicalbum.cpp \
    musicmodel.cpp

HEADERS  += mainwindow.h \
    musicalbum.h \
    musicmodel.h

FORMS    += mainwindow.ui
