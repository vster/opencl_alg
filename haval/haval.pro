TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    haval.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp \
    ../enc_tab.cpp \
    ../encoder.cpp \
    ../filtbase.cpp \
    ../pipe_io.cpp \
    ../secqueue.cpp \
    haval-main.cpp

INCLUDEPATH += \
    ../include

