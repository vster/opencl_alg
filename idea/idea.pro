TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    idea.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp \
    idea-main.cpp

INCLUDEPATH += \
    ../include
