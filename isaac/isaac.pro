TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    is.cpp \
    isaac.cpp \
    ../exceptn.cpp \
    ../mlock.cpp \
    ../opencl.cpp \
    ../util.cpp

DISTFILES += \
    ClassDiagram1.cd

INCLUDEPATH += \
    ../include
