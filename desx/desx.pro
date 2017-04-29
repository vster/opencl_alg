TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    des_tab.cpp \
    des.cpp \
    desx.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp \
    desx-main.cpp

INCLUDEPATH += \
    ../include
