/********************************************************************
    created:   2003/09/09
    filename:  main.cpp

    author:    Micha Bieber
*********************************************************************/

#include <qapplication.h>
#include "mesh2mainwindow.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    Mesh2MainWindow mainwindow;

    mainwindow.resize(1024, 768);
    mainwindow.show();

    return app.exec();
}
