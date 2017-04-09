/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Apr 8 23:14:26 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   17,   12,   11, 0x0a,
      61,   11,   11,   11, 0x0a,
      72,   11,   11,   11, 0x08,
      89,   11,   11,   11, 0x08,
     113,   11,   11,   11, 0x08,
     137,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0bool\0watched,event\0"
    "eventFilter(QObject*,QEvent*)\0ShowTime()\0"
    "on_Log_clicked()\0on_Management_clicked()\0"
    "on_System_set_clicked()\0on_SetZero_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: ShowTime(); break;
        case 2: on_Log_clicked(); break;
        case 3: on_Management_clicked(); break;
        case 4: on_System_set_clicked(); break;
        case 5: on_SetZero_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
