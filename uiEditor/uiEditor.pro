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
    affair/affair.cpp \
    analysis/analysis.cpp \
    init/init.cpp \
    attribute/attribute.cpp \
    control/view.cpp

HEADERS  += mainwindow.h \
    libxml2-2.7.2/include/libxml/*.h \
   affair/affair.h \
    analysis/analysis.h \
    init/init.h \
    attribute/attribute.h \
    control/view.h

FORMS    += mainwindow.ui



INCLUDEPATH += $$PWD/libxml2-2.7.2/include
DEPENDPATH += $$PWD/libxml2-2.7.2/include
