/********************************************************************
    created:   2003/09/10
    filename:  main.cpp

    author:    Micha Bieber
*********************************************************************/

#include <qapplication.h>
#include "enrichmentmainwindow.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    EnrichmentMainWindow mainwindow;

    mainwindow.show();

    return app.exec();
}
