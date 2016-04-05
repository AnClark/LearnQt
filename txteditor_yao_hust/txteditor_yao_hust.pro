#-------------------------------------------------
#
#   QT实现文本编辑器
#   By:     yao_hust_iAC
#   http://blog.csdn.net/yao_wust/article/details/23830141
#
# Project created by QtCreator 2016-04-05T18:37:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = txteditor_yao_hust
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
