/****************************************************************************
** Meta object code from reading C++ file 'log.h'
**
** Created: Sat Apr 8 18:49:45 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "log.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'log.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Log[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x08,
      27,    4,    4,    4, 0x08,
      47,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Log[] = {
    "Log\0\0on_NGButton_clicked()\0"
    "on_Return_clicked()\0on_LoadLog_2_clicked()\0"
};

void Log::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Log *_t = static_cast<Log *>(_o);
        switch (_id) {
        case 0: _t->on_NGButton_clicked(); break;
        case 1: _t->on_Return_clicked(); break;
        case 2: _t->on_LoadLog_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Log::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Log::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Log,
      qt_meta_data_Log, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Log::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Log::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Log::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Log))
        return static_cast<void*>(const_cast< Log*>(this));
    return QWidget::qt_metacast(_clname);
}

int Log::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
