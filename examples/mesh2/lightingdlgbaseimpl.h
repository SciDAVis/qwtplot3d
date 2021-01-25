#ifndef LIGHTINGDLGBASE_H
#define LIGHTINGDLGBASE_H
#include "lightingdlgbase.h"

class lightingdlgbase : public lightingdlgbaseBase
{ 
    Q_OBJECT

public:
    lightingdlgbase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~lightingdlgbase();

};

#endif // LIGHTINGDLGBASE_H
