TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    sha1.cpp \
    hash.cpp \
    ../enc_tab.cpp \
    ../encoder.cpp \
    ../exceptn.cpp \
    ../filtbase.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../pipe_io.cpp \
    ../secqueue.cpp \
    ../util.cpp

INCLUDEPATH += \
    ../include
