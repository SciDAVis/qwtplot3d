#ifndef __colormapreader_2003_06_08_13_23__
#define __colormapreader_2003_06_08_13_23__

#include <qlabel.h>
#include <qframe.h>
#include <qpixmap.h>

#include "../../../include/qwt3d_types.h"

#if QT_VERSION < 0x040000

class ColorMapPreview : public QFrame, public QFilePreview
{
public:
  ColorMapPreview( QWidget *parent=0 );
  void previewUrl( const QUrl &u );

private:
	Qwt3D::ColorVector cv;
	QLabel* label_;
	QPixmap pix_;
	bool open(QString);
};

#else // if present in Qt4  
#endif

#endif
