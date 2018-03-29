#==================================================================
# Assignment4.pro - Assignment 4
#==================================================================

TEMPLATE = app
TARGET = Banking_Assignment

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    user.cpp \
    savings.cpp \
    checking.cpp \
    mainwindow.cpp

HEADERS += \
    user.h \
    savings.h \
    checking.h \
    mainwindow.h
