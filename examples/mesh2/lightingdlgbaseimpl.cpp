#include "lightingdlgbaseimpl.h"

/* 
 *  Constructs a lightingdlgbase which is a child of 'parent', with the 
 *  name 'name' and widget flags set to 'f' 
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
lightingdlgbase::lightingdlgbase( QWidget* parent,  const char* name, bool modal, WFlags fl )
    : lightingdlgbaseBase( parent, name, modal, fl )
{
}

/*  
 *  Destroys the object and frees any allocated resources
 */
lightingdlgbase::~lightingdlgbase()
{
    // no need to delete child widgets, Qt does it all for us
}

