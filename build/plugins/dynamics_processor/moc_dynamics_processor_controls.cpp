/****************************************************************************
** Meta object code from reading C++ file 'dynamics_processor_controls.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/dynamics_processor/dynamics_processor_controls.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dynamics_processor_controls.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dynProcControls_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dynProcControls_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dynProcControls_t qt_meta_stringdata_dynProcControls = {
    {
QT_MOC_LITERAL(0, 0, 15), // "dynProcControls"
QT_MOC_LITERAL(1, 16, 14), // "samplesChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "sampleRateChanged"
QT_MOC_LITERAL(4, 50, 12), // "resetClicked"
QT_MOC_LITERAL(5, 63, 13), // "smoothClicked"
QT_MOC_LITERAL(6, 77, 13), // "addOneClicked"
QT_MOC_LITERAL(7, 91, 13) // "subOneClicked"

    },
    "dynProcControls\0samplesChanged\0\0"
    "sampleRateChanged\0resetClicked\0"
    "smoothClicked\0addOneClicked\0subOneClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dynProcControls[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08 /* Private */,
       3,    0,   49,    2, 0x08 /* Private */,
       4,    0,   50,    2, 0x08 /* Private */,
       5,    0,   51,    2, 0x08 /* Private */,
       6,    0,   52,    2, 0x08 /* Private */,
       7,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dynProcControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dynProcControls *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->samplesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sampleRateChanged(); break;
        case 2: _t->resetClicked(); break;
        case 3: _t->smoothClicked(); break;
        case 4: _t->addOneClicked(); break;
        case 5: _t->subOneClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dynProcControls::staticMetaObject = { {
    &EffectControls::staticMetaObject,
    qt_meta_stringdata_dynProcControls.data,
    qt_meta_data_dynProcControls,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dynProcControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dynProcControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dynProcControls.stringdata0))
        return static_cast<void*>(this);
    return EffectControls::qt_metacast(_clname);
}

int dynProcControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EffectControls::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
