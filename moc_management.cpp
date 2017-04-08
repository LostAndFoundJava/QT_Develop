/****************************************************************************
** Meta object code from reading C++ file 'management.h'
**
** Created: Sat Apr 8 18:49:47 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "management.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'management.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Management[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x08,
      54,   12,   11,   11, 0x08,
      82,   11,   11,   11, 0x08,
     110,   12,   11,   11, 0x08,
     138,   12,   11,   11, 0x08,
     168,   12,   11,   11, 0x08,
     194,   12,   11,   11, 0x08,
     221,   12,   11,   11, 0x08,
     244,   12,   11,   11, 0x08,
     273,   11,   11,   11, 0x0a,
     284,   11,   11,   11, 0x0a,
     295,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Management[] = {
    "Management\0\0checked\0"
    "on_AluminizerButton_clicked(bool)\0"
    "on_packButton_clicked(bool)\0"
    "on_LearningButton_clicked()\0"
    "on_bulkButton_clicked(bool)\0"
    "on_FinishButton_clicked(bool)\0"
    "on_OddRmove_clicked(bool)\0"
    "on_AutoStart_clicked(bool)\0"
    "on_Light_clicked(bool)\0"
    "on_radioButton_clicked(bool)\0ShowTime()\0"
    "SaveData()\0tableWidgtShowInformation(QModelIndex)\0"
};

void Management::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Management *_t = static_cast<Management *>(_o);
        switch (_id) {
        case 0: _t->on_AluminizerButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_packButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_LearningButton_clicked(); break;
        case 3: _t->on_bulkButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_FinishButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_OddRmove_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_AutoStart_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_Light_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_radioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->ShowTime(); break;
        case 10: _t->SaveData(); break;
        case 11: _t->tableWidgtShowInformation((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Management::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Management::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Management,
      qt_meta_data_Management, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Management::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Management::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Management::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Management))
        return static_cast<void*>(const_cast< Management*>(this));
    return QWidget::qt_metacast(_clname);
}

int Management::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
