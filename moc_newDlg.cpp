/****************************************************************************
** Meta object code from reading C++ file 'newDlg.h'
**
** Created: Mon Jul 24 13:46:48 2017
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "newDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newDlg[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      32,    7,    7,    7, 0x08,
      57,    7,    7,    7, 0x08,
      78,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_newDlg[] = {
    "newDlg\0\0on_pushButton_clicked()\0"
    "paintEvent(QPaintEvent*)\0on_Daydate_clicked()\0"
    "on_Mouthdate_clicked()\0"
};

const QMetaObject newDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_newDlg,
      qt_meta_data_newDlg, 0 }
};

const QMetaObject *newDlg::metaObject() const
{
    return &staticMetaObject;
}

void *newDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_newDlg))
        return static_cast<void*>(const_cast< newDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int newDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 2: on_Daydate_clicked(); break;
        case 3: on_Mouthdate_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
