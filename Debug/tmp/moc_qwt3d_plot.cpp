/****************************************************************************
** Meta object code from reading C++ file 'qwt3d_plot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/qwt3d_plot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt3d_plot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qwt3D__Plot3D[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   15,   14,   14, 0x05,
      95,   74,   14,   14, 0x05,
     144,  130,   14,   14, 0x05,
     200,  179,   14,   14, 0x05,
     235,   14,   14,   14, 0x05,
     255,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     294,  279,   14,   14, 0x0a,
     328,  279,   14,   14, 0x0a,
     369,  359,   14,   14, 0x0a,
     401,  279,   14,   14, 0x0a,
     432,   14,   14,   14, 0x0a,
     448,   14,   14,   14, 0x0a,
     467,  463,   14,   14, 0x0a,
     485,   14,   14,   14, 0x2a,
     499,  463,   14,   14, 0x0a,
     518,   14,   14,   14, 0x2a,
     533,  463,   14,   14, 0x0a,
     554,   14,   14,   14, 0x2a,
     571,  463,   14,   14, 0x0a,
     593,   14,   14,   14, 0x2a,
     611,  463,   14,   14, 0x0a,
     632,   14,   14,   14, 0x2a,
     649,  463,   14,   14, 0x0a,
     671,   14,   14,   14, 0x2a,
     708,  689,   14,   14, 0x0a,
     752,  279,   14,   14, 0x2a,
     791,  689,   14,   14, 0x0a,
     832,  279,   14,   14, 0x2a,
     889,  873,  868,   14, 0x0a,
     947,  917,  868,   14, 0x0a,
    1021,  873,  868,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Qwt3D__Plot3D[] = {
    "Qwt3D::Plot3D\0\0xAngle,yAngle,zAngle\0"
    "rotationChanged(double,double,double)\0"
    "xShift,yShift,zShift\0"
    "shiftChanged(double,double,double)\0"
    "xShift,yShift\0vieportShiftChanged(double,double)\0"
    "xScale,yScale,zScale\0"
    "scaleChanged(double,double,double)\0"
    "zoomChanged(double)\0projectionChanged(bool)\0"
    "xVal,yVal,zVal\0setRotation(double,double,double)\0"
    "setShift(double,double,double)\0xVal,yVal\0"
    "setViewportShift(double,double)\0"
    "setScale(double,double,double)\0"
    "setZoom(double)\0setOrtho(bool)\0val\0"
    "enableMouse(bool)\0enableMouse()\0"
    "disableMouse(bool)\0disableMouse()\0"
    "enableKeyboard(bool)\0enableKeyboard()\0"
    "disableKeyboard(bool)\0disableKeyboard()\0"
    "enableLighting(bool)\0enableLighting()\0"
    "disableLighting(bool)\0disableLighting()\0"
    "xVal,yVal,zVal,idx\0"
    "setLightRotation(double,double,double,uint)\0"
    "setLightRotation(double,double,double)\0"
    "setLightShift(double,double,double,uint)\0"
    "setLightShift(double,double,double)\0"
    "bool\0fileName,format\0savePixmap(QString,QString)\0"
    "fileName,format,text,sortmode\0"
    "saveVector(QString,QString,VectorWriter::TEXTMODE,VectorWriter::SORTMO"
    "DE)\0"
    "save(QString,QString)\0"
};

void Qwt3D::Plot3D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Plot3D *_t = static_cast<Plot3D *>(_o);
        switch (_id) {
        case 0: _t->rotationChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->shiftChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->vieportShiftChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->scaleChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->projectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setRotation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 7: _t->setShift((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->setViewportShift((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->setScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 10: _t->setZoom((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setOrtho((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->enableMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->enableMouse(); break;
        case 14: _t->disableMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->disableMouse(); break;
        case 16: _t->enableKeyboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->enableKeyboard(); break;
        case 18: _t->disableKeyboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->disableKeyboard(); break;
        case 20: _t->enableLighting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->enableLighting(); break;
        case 22: _t->disableLighting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->disableLighting(); break;
        case 24: _t->setLightRotation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 25: _t->setLightRotation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 26: _t->setLightShift((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 27: _t->setLightShift((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 28: { bool _r = _t->savePixmap((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->saveVector((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< VectorWriter::TEXTMODE(*)>(_a[3])),(*reinterpret_cast< VectorWriter::SORTMODE(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->save((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qwt3D::Plot3D::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qwt3D::Plot3D::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_Qwt3D__Plot3D,
      qt_meta_data_Qwt3D__Plot3D, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qwt3D::Plot3D::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qwt3D::Plot3D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qwt3D::Plot3D::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qwt3D__Plot3D))
        return static_cast<void*>(const_cast< Plot3D*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int Qwt3D::Plot3D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void Qwt3D::Plot3D::rotationChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qwt3D::Plot3D::shiftChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qwt3D::Plot3D::vieportShiftChanged(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qwt3D::Plot3D::scaleChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qwt3D::Plot3D::zoomChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Qwt3D::Plot3D::projectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
