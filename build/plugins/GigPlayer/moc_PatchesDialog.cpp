/****************************************************************************
** Meta object code from reading C++ file 'PatchesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/GigPlayer/PatchesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PatchesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PatchesDialog_t {
    QByteArrayData data[10];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PatchesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PatchesDialog_t qt_meta_stringdata_PatchesDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PatchesDialog"
QT_MOC_LITERAL(1, 14, 13), // "stabilizeForm"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "bankChanged"
QT_MOC_LITERAL(4, 41, 11), // "progChanged"
QT_MOC_LITERAL(5, 53, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 70, 4), // "curr"
QT_MOC_LITERAL(7, 75, 4), // "prev"
QT_MOC_LITERAL(8, 80, 6), // "accept"
QT_MOC_LITERAL(9, 87, 6) // "reject"

    },
    "PatchesDialog\0stabilizeForm\0\0bankChanged\0"
    "progChanged\0QTreeWidgetItem*\0curr\0"
    "prev\0accept\0reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PatchesDialog[] = {

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

void PatchesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PatchesDialog *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject PatchesDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_PatchesDialog.data,
    qt_meta_data_PatchesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PatchesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PatchesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PatchesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PatchesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
