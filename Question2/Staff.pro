#-------------------------------------------------
#
# Project created by QtCreator 2023-05-02T07:41:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Staff
TEMPLATE = app


SOURCES += main.cpp\
    filewriter.cpp \
        mainwindow.cpp \
    staffClass.cpp \
    stafflist.cpp

HEADERS  += mainwindow.h \
    filewriter.h \
    staffClass.h \
    stafflist.h

FORMS    += mainwindow.ui
