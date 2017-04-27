TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    enc_tab.cpp \
    encoder.cpp \
    filtbase.cpp \
    hex.cpp \
    secqueue.cpp \
    pipe_io.cpp \
    ../mlock.cpp

INCLUDEPATH += \
    ../include
