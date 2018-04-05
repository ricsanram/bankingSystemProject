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
    bankingsystem.cpp \
    login.cpp \
    depositwindow.cpp \
    depositsavingswindow.cpp \
    depositcheckingwindow.cpp

HEADERS += \
    mainwindow.h \
    user.h \
    savings.h \
    checking.h \
    savingscheckingwindow.h \
    bankingsystem.h \
    login.h \
    depositwindow.h \
    depositsavingswindow.h \
    depositcheckingwindow.h
