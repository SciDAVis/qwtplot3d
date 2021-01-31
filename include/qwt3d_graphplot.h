#ifndef qwt3d_graphplot_h
#define qwt3d_graphplot_h

#include "qwt3d_plot.h"

namespace Qwt3D {

//! TODO
class QWT3D_EXPORT GraphPlot : public Plot3D
{
    //    Q_OBJECT

public:
    GraphPlot(QWidget *parent = 0, const char *name = 0);

protected:
    virtual void createData() = 0;
};

} // ns

#endif
