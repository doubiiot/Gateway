/****************************************************************************
** Meta object code from reading C++ file 'Dlg_humi.h'
**
** Created: Mon Jul 24 13:46:49 2017
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Dlg_humi.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Dlg_humi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dlg_humi[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      35,    9,    9,    9, 0x08,
      54,    9,    9,    9, 0x08,
      76,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dlg_humi[] = {
    "Dlg_humi\0\0paintEvent(QPaintEvent*)\0"
    "on_close_clicked()\0on_Day_humi_clicked()\0"
    "on_Month_humi_clicked()\0"
};

const QMetaObject Dlg_humi::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dlg_humi,
      qt_meta_data_Dlg_humi, 0 }
};

const QMetaObject *Dlg_humi::metaObject() const
{
    return &staticMetaObject;
}

void *Dlg_humi::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dlg_humi))
        return static_cast<void*>(const_cast< Dlg_humi*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dlg_humi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: on_close_clicked(); break;
        case 2: on_Day_humi_clicked(); break;
        case 3: on_Month_humi_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
