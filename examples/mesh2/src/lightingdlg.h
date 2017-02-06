#ifndef lightingdlg_h__2004_03_07_13_35_begin_guarded_code
#define lightingdlg_h__2004_03_07_13_35_begin_guarded_code

#include <math.h>
#include <qapplication.h>
#include "../../../include/qwt3d_parametricsurface.h"
#include "../../../include/qwt3d_surfaceplot.h"
#include "../../../include/qwt3d_enrichment.h"
#include "../../../include/qwt3d_color.h"

#if QT_VERSION < 0x040000
#include "lightingdlgbase.h"
#else
#include "ui_lightingdlgbase4.h"
#endif

class Pointer : public Qwt3D::VertexEnrichment
{
public:
  Pointer(double rad);
  ~Pointer();

  Qwt3D::Enrichment* clone() const {return new Pointer(*this);}
  
  void configure(double rad);
  void drawBegin();
  void draw(Qwt3D::Triple const&){}
  void setPos(double x, double y, double z) {pos_ = Qwt3D::Triple(x,y,z);}

private:
  double radius_;
  Qwt3D::Triple pos_;
};

struct SColor : public Qwt3D::Color
{
  Qwt3D::RGBA operator()(double, double, double) const {return Qwt3D::RGBA(0.8,0,0,0.5);}
};

typedef Qwt3D::SurfacePlot SPlot; // moc/VC6 issue in Qt 4.0.0

class Plot : public SPlot
{
  Q_OBJECT
    
public:
  Plot(QWidget* parent);
  Pointer* stick;
  void reset();
};

//MOC_SKIP_BEGIN
#if QT_VERSION < 0x040000
  class LightingBase : public LightingDlgBase
  {
  public:
    LightingBase(QWidget* parent = 0) 
      : LightingDlgBase(parent) 
    {
    } 
  };
#else
  class LightingBase : public QDialog, protected Ui::Dialog
  {
  public:
    LightingBase(QWidget* parent = 0) 
      : QDialog(parent) 
    {
    } 
  };
#endif
//MOC_SKIP_END



class LightingDlg : public LightingBase
{
	Q_OBJECT
    
public:
  LightingDlg(QWidget *parent=0);
  ~LightingDlg();

  void assign(Qwt3D::Plot3D* pl);
  
  Plot* plot;
  Qwt3D::Plot3D* dataPlot;

public slots:
	void setDistance(int);
	void setEmission(int);
	void setDiff(int);
	void setSpec(int);
	void setShin(int);
  void reset();
  void setRotation(double x, double y, double z);
};

    
#endif /* include guarded */
