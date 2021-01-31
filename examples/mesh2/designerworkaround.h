#ifndef designerworkaround_h
#define designerworkaround_h

#include <QMenu>
#include <QToolBar>
#include <QAction>
#include <QActionGroup>
#include <QMainWindow>
#include <QComboBox>
#include <QMenuBar>

class DesignerWorkaround
{
public:
    QMenuBar *menubar;
    QMenu *filemenu;
    QMenu *colormenu;
    QMenu *fontmenu;
    QToolBar *mainToolbar;
    QToolBar *csToolbar;
    QAction *openFile;
    QAction *openMeshFile;
    QAction *animation;
    QAction *dump;
    QAction *normals;
    QAction *Exit;

    QActionGroup *coord;
    QAction *Box;
    QAction *Frame;
    QAction *None;

    QActionGroup *plotstyle;
    QAction *wireframe;
    QAction *hiddenline;
    QAction *polygon;
    QAction *filledmesh;
    QAction *nodata;
    QAction *pointstyle;

    QActionGroup *color;
    QAction *axescolor;
    QAction *backgroundcolor;
    QAction *meshcolor;
    QAction *numbercolor;
    QAction *labelcolor;
    QAction *titlecolor;
    QAction *datacolor;
    QAction *resetcolor;

    QActionGroup *font;
    QAction *numberfont;
    QAction *labelfont;
    QAction *titlefont;
    QAction *resetfont;

    QActionGroup *floorstyle;
    QAction *floordata;
    QAction *flooriso;
    QAction *floornone;

    QActionGroup *grids;
    QAction *front;
    QAction *back;
    QAction *right;
    QAction *left;
    QAction *ceil;
    QAction *floor;

    QComboBox *filetypeCB, *functionCB, *psurfaceCB;

    void setupWorkaround(QMainWindow *mw);
};

#endif
