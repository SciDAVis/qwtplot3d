#ifndef qwt3d_multiplot_h
#define qwt3d_multiplot_h

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
