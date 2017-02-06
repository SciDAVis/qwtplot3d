# pro file for building the makefile for qwtplot3d
#

TARGET            = qwtplot3d
TEMPLATE          = lib
CONFIG           += qt warn_on opengl thread zlib debug
MOC_DIR           = tmp
OBJECTS_DIR       = tmp
INCLUDEPATH       = include
DEPENDPATH        = include src
DESTDIR      			= lib
#DESTDIR      			= ../../../lib
QT += opengl

win32:TEMPLATE    = vclib
win32:CONFIG     += dll exceptions
win32:dll:DEFINES    += QT_DLL QWT3D_DLL QWT3D_MAKEDLL
win32:QMAKE_CXXFLAGS     += $$QMAKE_CFLAGS_STL

# Comment the next line, if you have zlib on your windows system
win32:CONFIG -= zlib

linux-g++:TMAKE_CXXFLAGS += -fno-exceptions
unix:VERSION = 0.2.6

# Input
SOURCES += src/qwt3d_axis.cpp \
           src/qwt3d_color.cpp \
           src/qwt3d_coordsys.cpp \
           src/qwt3d_drawable.cpp \
           src/qwt3d_mousekeyboard.cpp \
           src/qwt3d_movements.cpp \
           src/qwt3d_lighting.cpp \
           src/qwt3d_colorlegend.cpp \
           src/qwt3d_plot.cpp \
           src/qwt3d_label.cpp \
           src/qwt3d_types.cpp \
           src/qwt3d_enrichment_std.cpp \
           src/qwt3d_autoscaler.cpp \
           src/qwt3d_io_reader.cpp \
           src/qwt3d_io.cpp \
           src/qwt3d_scale.cpp

SOURCES += src/qwt3d_gridmapping.cpp \
					 src/qwt3d_parametricsurface.cpp \
           src/qwt3d_function.cpp

SOURCES += src/qwt3d_surfaceplot.cpp \
           src/qwt3d_gridplot.cpp \
           src/qwt3d_meshplot.cpp
          

HEADERS += include/qwt3d_color.h \
           include/qwt3d_global.h \
           include/qwt3d_types.h \
	         include/qwt3d_axis.h \
           include/qwt3d_coordsys.h \
           include/qwt3d_drawable.h \
           include/qwt3d_helper.h \
           include/qwt3d_label.h \
           include/qwt3d_openglhelper.h \
           include/qwt3d_colorlegend.h \
           include/qwt3d_plot.h \
           include/qwt3d_enrichment.h \
           include/qwt3d_enrichment_std.h \
           include/qwt3d_autoscaler.h \
           include/qwt3d_autoptr.h \
           include/qwt3d_io.h \
           include/qwt3d_io_reader.h \
           include/qwt3d_scale.h \
           include/qwt3d_portability.h
						
HEADERS += include/qwt3d_mapping.h \
					 include/qwt3d_gridmapping.h \
           include/qwt3d_parametricsurface.h \
           include/qwt3d_function.h

HEADERS += include/qwt3d_surfaceplot.h \
           include/qwt3d_volumeplot.h \
           include/qwt3d_graphplot.h \
           include/qwt3d_multiplot.h

# gl2ps support
HEADERS+=3rdparty/gl2ps/gl2ps.h \
         include/qwt3d_io_gl2ps.h
         
SOURCES+=src/qwt3d_io_gl2ps.cpp \
         3rdparty/gl2ps/gl2ps.c

# zlib support for gl2ps
zlib {
  DEFINES += GL2PS_HAVE_ZLIB
  win32:LIBS += zlib.lib
	unix:LIBS  += -lz
}


