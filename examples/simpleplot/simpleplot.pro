QT += core gui opengl



INCLUDEPATH += $$PWD/../../include
DEPENDPATH += $$PWD/../../include

DESTDIR = ../bin


LIBS += -lglut -lGL -L$$PWD/../../Debug/lib/ -lqwtplot3d -lGLU -lm





SOURCES = simpleplot.cpp






