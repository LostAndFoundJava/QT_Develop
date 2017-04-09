/****************************************************************************
** Meta object code from reading C++ file 'dataset.h'
**
** Created: Sat Apr 8 23:14:19 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dataset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dataset[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      27,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_dataset[] = {
    "dataset\0\0on_save_clicked()\0"
    "on_cancel_clicked()\0"
};

const QMetaObject dataset::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_dataset,
      qt_meta_data_dataset, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dataset::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dataset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dataset::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dataset))
        return static_cast<void*>(const_cast< dataset*>(this));
    return QWidget::qt_metacast(_clname);
}

int dataset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_save_clicked(); break;
        case 1: on_cancel_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
