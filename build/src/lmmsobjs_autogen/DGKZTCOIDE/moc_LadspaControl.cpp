/****************************************************************************
** Meta object code from reading C++ file 'LadspaControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/LadspaControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LadspaControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LadspaControl_t {
    QByteArrayData data[12];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LadspaControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LadspaControl_t qt_meta_stringdata_LadspaControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LadspaControl"
QT_MOC_LITERAL(1, 14, 7), // "changed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "_port"
QT_MOC_LITERAL(4, 29, 11), // "LADSPA_Data"
QT_MOC_LITERAL(5, 41, 6), // "_value"
QT_MOC_LITERAL(6, 48, 11), // "linkChanged"
QT_MOC_LITERAL(7, 60, 6), // "_state"
QT_MOC_LITERAL(8, 67, 10), // "ledChanged"
QT_MOC_LITERAL(9, 78, 11), // "knobChanged"
QT_MOC_LITERAL(10, 90, 16), // "tempoKnobChanged"
QT_MOC_LITERAL(11, 107, 16) // "linkStateChanged"

    },
    "LadspaControl\0changed\0\0_port\0LADSPA_Data\0"
    "_value\0linkChanged\0_state\0ledChanged\0"
    "knobChanged\0tempoKnobChanged\0"
    "linkStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LadspaControl[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   54,    2, 0x09 /* Protected */,
       9,    0,   55,    2, 0x09 /* Protected */,
      10,    0,   56,    2, 0x09 /* Protected */,
      11,    0,   57,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LadspaControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LadspaControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< LADSPA_Data(*)>(_a[2]))); break;
        case 1: _t->linkChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->ledChanged(); break;
        case 3: _t->knobChanged(); break;
        case 4: _t->tempoKnobChanged(); break;
        case 5: _t->linkStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LadspaControl::*)(int , LADSPA_Data );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LadspaControl::changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LadspaControl::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LadspaControl::linkChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LadspaControl::staticMetaObject = { {
    &Model::staticMetaObject,
    qt_meta_stringdata_LadspaControl.data,
    qt_meta_data_LadspaControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LadspaControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LadspaControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LadspaControl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "JournallingObject"))
        return static_cast< JournallingObject*>(this);
    return Model::qt_metacast(_clname);
}

int LadspaControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Model::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LadspaControl::changed(int _t1, LADSPA_Data _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LadspaControl::linkChanged(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
