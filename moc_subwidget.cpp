/****************************************************************************
** Meta object code from reading C++ file 'subwidget.h'
**
** Created: Sat Apr 8 22:31:29 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "subwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SUBWIDGET[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     156,   10,   10,   10, 0x08,
     170,   10,   10,   10, 0x08,
     182,   10,   10,   10, 0x08,
     205,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SUBWIDGET[] = {
    "SUBWIDGET\0\0,,,,,,,,,,,,,,,,\0"
    "setData(double,double,double,double,double,double,double,double,double"
    ",double,double,double,double,double,double,double,double)\0"
    "getValue(int)\0stopTimer()\0"
    "dotSlot(QList<double>)\0clear()\0"
};

void SUBWIDGET::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SUBWIDGET *_t = static_cast<SUBWIDGET *>(_o);
        switch (_id) {
        case 0: _t->setData((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< double(*)>(_a[13])),(*reinterpret_cast< double(*)>(_a[14])),(*reinterpret_cast< double(*)>(_a[15])),(*reinterpret_cast< double(*)>(_a[16])),(*reinterpret_cast< double(*)>(_a[17]))); break;
        case 1: _t->getValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->stopTimer(); break;
        case 3: _t->dotSlot((*reinterpret_cast< QList<double>(*)>(_a[1]))); break;
        case 4: _t->clear(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SUBWIDGET::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SUBWIDGET::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SUBWIDGET,
      qt_meta_data_SUBWIDGET, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SUBWIDGET::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SUBWIDGET::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SUBWIDGET::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SUBWIDGET))
        return static_cast<void*>(const_cast< SUBWIDGET*>(this));
    return QWidget::qt_metacast(_clname);
}

int SUBWIDGET::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SUBWIDGET::setData(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6, double _t7, double _t8, double _t9, double _t10, double _t11, double _t12, double _t13, double _t14, double _t15, double _t16, double _t17)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)), const_cast<void*>(reinterpret_cast<const void*>(&_t16)), const_cast<void*>(reinterpret_cast<const void*>(&_t17)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
