#include "qwt3d_surfaceplot.h"
#include "qwt3d_function.h"
#include "qwt3d_plot.h"
#include "enrichments.h"


#if QT_VERSION < 0x040000
#include "enrichmentmainwindowbase.h"
#else
#include "ui_enrichmentmainwindowbase4.h"
#endif

//MOC_SKIP_BEGIN
#if QT_VERSION < 0x040000
  class DummyBase : public EnrichmentMainWindowBase
  {
  public:
    DummyBase(QWidget* parent = 0) 
      : EnrichmentMainWindowBase(parent) 
    {
    } 
  };
#else
  class DummyBase : public QMainWindow, protected Ui::MainWindow
  {
  public:
    DummyBase(QWidget* parent = 0) 
      : QMainWindow(parent) 
    {
    } 
  };
#endif
//MOC_SKIP_END


class EnrichmentMainWindow : public DummyBase
{
	Q_OBJECT

public:
	EnrichmentMainWindow( QWidget* parent = 0 );
	~EnrichmentMainWindow();
  void setColor();
  Bar *bar;
  Qwt3D::SurfacePlot* plot;

public slots:
  void setLevel(int);
  void setWidth(int);
  void barSlot();
 
private:
  double level_, width_;
  
};


