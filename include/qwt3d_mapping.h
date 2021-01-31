#ifndef qwt3d_mapping_h
#define qwt3d_mapping_h

#include <qstring.h>
#include "qwt3d_global.h"
#include "qwt3d_types.h"

namespace Qwt3D {

//! Abstract base class for general mappings
/**

*/
class QWT3D_EXPORT Mapping
{

public:
    virtual ~Mapping() { } //!< Destructor.
    virtual QString name() const { return QString(""); } //!< Descriptive String.
};

} // ns

#endif /* include guarded */
