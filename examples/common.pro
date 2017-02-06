TEMPLATE     = app
CONFIG      += qt warn_on thread debug
UI_DIR = tmp
MOC_DIR      = tmp
OBJECTS_DIR  = tmp
INCLUDEPATH    += ../../include 
DEPENDPATH	= $$INCLUDEPATH
DESTDIR = ../bin

unix:LIBS += -lqwtplot3d -L../../lib
linux-g++:QMAKE_CXXFLAGS += -fno-exceptions

win32{
  LIBS += ../../lib/qwtplot3d.lib
  TEMPLATE  = vcapp
  DEFINES  += QT_DLL QWT3D_DLL
  RC_FILE = ../icon.rc
  contains (CONFIG, debug)  {
    QMAKE_LFLAGS += /NODEFAULTLIB:msvcrt
  }

}

MYVERSION = $$[QMAKE_VERSION] 
ISQT4 = $$find(MYVERSION, ^[2-9])

!isEmpty( ISQT4 ) {
RESOURCES     = ../images.qrc
QT += opengl
}

isEmpty( ISQT4 ) {
CONFIG += opengl
}
