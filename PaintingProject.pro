#-------------------------------------------------
#
# Project created by QtCreator 2014-06-10T20:24:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PaintingProject
TEMPLATE = app


SOURCES += main.cpp\
    PaintingMainWindow.cpp \
    SimplePaintableWidget.cpp

HEADERS  += \
    PaintingMainWindow.h \
    SimplePaintableWidget.h

FORMS    += paintingmainwindow.ui
