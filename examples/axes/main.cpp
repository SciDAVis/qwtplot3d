/********************************************************************
    created:   2003/09/10
    filename:  main.cpp
	
    author:    Micha Bieber	
*********************************************************************/

#include <qapplication.h>
#include "axesmainwindow.h"


int main( int argc, char** argv )
{
	QApplication app( argc, argv );
	
  if ( !QGLFormat::hasOpenGL() ) 
	{
		qWarning( "This system has no OpenGL support. Exiting." );     
		return -1;
  }

	AxesMainWindow mainwindow;
	
#if QT_VERSION < 0x040000
  app.setMainWidget(&mainwindow);
#endif

	mainwindow.show();

	return app.exec();
}
