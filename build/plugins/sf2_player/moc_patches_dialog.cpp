/****************************************************************************
** Meta object code from reading C++ file 'patches_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/sf2_player/patches_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patches_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_patchesDialog_t {
    QByteArrayData data[10];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_patchesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_patchesDialog_t qt_meta_stringdata_patchesDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "patchesDialog"
QT_MOC_LITERAL(1, 14, 13), // "stabilizeForm"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "bankChanged"
QT_MOC_LITERAL(4, 41, 11), // "progChanged"
QT_MOC_LITERAL(5, 53, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 70, 5), // "_curr"
QT_MOC_LITERAL(7, 76, 5), // "_prev"
QT_MOC_LITERAL(8, 82, 6), // "accept"
QT_MOC_LITERAL(9, 89, 6) // "reject"

    },
    "patchesDialog\0stabilizeForm\0\0bankChanged\0"
    "progChanged\0QTreeWidgetItem*\0_curr\0"
    "_prev\0accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_patchesDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    2,   41,    2, 0x0a /* Public */,
       8,    0,   46,    2, 0x09 /* Protected */,
       9,    0,   47,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void patchesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<patchesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stabilizeForm(); break;
        case 1: _t->bankChanged(); break;
        case 2: _t->progChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->accept(); break;
        case 4: _t->reject(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject patchesDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_patchesDialog.data,
    qt_meta_data_patchesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *patchesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *patchesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_patchesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int patchesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
