/****************************************************************************
** Meta object code from reading C++ file 'ControllerConnectionDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/ControllerConnectionDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ControllerConnectionDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControllerConnectionDialog_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControllerConnectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControllerConnectionDialog_t qt_meta_stringdata_ControllerConnectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "ControllerConnectionDialog"
QT_MOC_LITERAL(1, 27, 16), // "selectController"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 11), // "midiToggled"
QT_MOC_LITERAL(4, 57, 11), // "userToggled"
QT_MOC_LITERAL(5, 69, 12), // "userSelected"
QT_MOC_LITERAL(6, 82, 17), // "autoDetectToggled"
QT_MOC_LITERAL(7, 100, 16), // "enableAutoDetect"
QT_MOC_LITERAL(8, 117, 8), // "QAction*"
QT_MOC_LITERAL(9, 126, 2), // "_a"
QT_MOC_LITERAL(10, 129, 16) // "midiValueChanged"

    },
    "ControllerConnectionDialog\0selectController\0"
    "\0midiToggled\0userToggled\0userSelected\0"
    "autoDetectToggled\0enableAutoDetect\0"
    "QAction*\0_a\0midiValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControllerConnectionDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void ControllerConnectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControllerConnectionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectController(); break;
        case 1: _t->midiToggled(); break;
        case 2: _t->userToggled(); break;
        case 3: _t->userSelected(); break;
        case 4: _t->autoDetectToggled(); break;
        case 5: _t->enableAutoDetect((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->midiValueChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControllerConnectionDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ControllerConnectionDialog.data,
    qt_meta_data_ControllerConnectionDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControllerConnectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControllerConnectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControllerConnectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ControllerConnectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
