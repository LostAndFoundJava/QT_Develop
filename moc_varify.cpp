/****************************************************************************
** Meta object code from reading C++ file 'varify.h'
**
** Created: Sat Apr 8 23:14:53 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "varify.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'varify.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_varify[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      19,    7,    7,    7, 0x0a,
      40,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_varify[] = {
    "varify\0\0ShowTime()\0on_DropOut_clicked()\0"
    "on_SetZero_clicked()\0"
};

const QMetaObject varify::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_varify,
      qt_meta_data_varify, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &varify::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *varify::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *varify::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_varify))
        return static_cast<void*>(const_cast< varify*>(this));
    return QWidget::qt_metacast(_clname);
}

int varify::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ShowTime(); break;
        case 1: on_DropOut_clicked(); break;
        case 2: on_SetZero_clicked(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
