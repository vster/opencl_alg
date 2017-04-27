TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    enc_tab.cpp \
    encoder.cpp \
    filtbase.cpp \
    hash.cpp \
    haval.cpp \
    pipe_io.cpp \
    secqueue.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp

INCLUDEPATH += \
    ../include

