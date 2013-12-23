#-------------------------------------------------
#
# Project created by QtCreator 2013-12-23T20:49:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = uiEditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    view.cpp \
    ../affair.cpp \
    control/view.cpp \
    affair/affair.cpp \
    analysis/analysis.cpp \
    init/init.cpp \
    attribute/attribute.cpp

HEADERS  += mainwindow.h \
    view.h \
    ../affair.h \
    control/view.h \
    affair/affair.h \
    analysis/analysis.h \
    init/init.h \
    attribute/attribute.h

FORMS    += mainwindow.ui
