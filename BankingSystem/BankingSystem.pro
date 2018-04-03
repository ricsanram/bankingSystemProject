#==================================================================
# Assignment4.pro - Assignment 4
#==================================================================

TEMPLATE = app
TARGET = Banking_Assignment

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    user.cpp \
    savings.cpp \
    checking.cpp \
    savingscheckingwindow.cpp \
    bankingsystem.cpp

HEADERS += \
    mainwindow.h \
    user.h \
    savings.h \
    checking.h \
    savingscheckingwindow.h \
    bankingsystem.h
