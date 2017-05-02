TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    md4.cpp \
    ../mlock.cpp \
    ../exceptn.cpp \
    ../opencl.cpp \
    ../util.cpp \
    ../enc_tab.cpp \
    ../encoder.cpp \
    ../pipe_io.cpp \
    ../secqueue.cpp \
    ../filtbase.cpp \
    md4-main.cpp


INCLUDEPATH += \
    ../include
