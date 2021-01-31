#ifndef qwt3d_multiplot_h__2004_03_06_02_05_begin_guarded_code
#define qwt3d_multiplot_h__2004_03_06_02_05_begin_guarded_code

#include "qwt3d_plot.h"

namespace Qwt3D {

//! TODO
class QWT3D_EXPORT MultiPlot : public Plot3D
{
    //    Q_OBJECT

public:
    MultiPlot(QWidget *parent = 0, const char *name = 0) { }

protected:
    virtual void createData() = 0;
};

} // ns

#endif
