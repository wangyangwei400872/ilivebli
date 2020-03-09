#-------------------------------------------------
#
# Project created by QtCreator 2020-02-29T16:28:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mplyertext
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    addsongfile.cpp \
    myqslider.cpp \
    myqthread.cpp \
    myacceptance.cpp \
    addsongfileqthrad.cpp \
    formzijiem.cpp



HEADERS  += widget.h \
    addsongfile.h \
    myqslider.h \
    myqthread.h \
    myacceptance.h \
    addsongfileqthrad.h \
    formzijiem.h




FORMS    += widget.ui \
    formzijiem.ui




RESOURCES += \
     songfile.qrc \

