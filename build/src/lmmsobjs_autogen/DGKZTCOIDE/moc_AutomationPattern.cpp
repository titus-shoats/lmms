/****************************************************************************
** Meta object code from reading C++ file 'AutomationPattern.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/AutomationPattern.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutomationPattern.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutomationPattern_t {
    QByteArrayData data[10];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutomationPattern_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutomationPattern_t qt_meta_stringdata_AutomationPattern = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AutomationPattern"
QT_MOC_LITERAL(1, 18, 5), // "clear"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "objectDestroyed"
QT_MOC_LITERAL(4, 41, 7), // "jo_id_t"
QT_MOC_LITERAL(5, 49, 5), // "flipY"
QT_MOC_LITERAL(6, 55, 3), // "min"
QT_MOC_LITERAL(7, 59, 3), // "max"
QT_MOC_LITERAL(8, 63, 5), // "flipX"
QT_MOC_LITERAL(9, 69, 6) // "length"

    },
    "AutomationPattern\0clear\0\0objectDestroyed\0"
    "jo_id_t\0flipY\0min\0max\0flipX\0length"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutomationPattern[] = {

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
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       5,    2,   48,    2, 0x0a /* Public */,
       5,    0,   53,    2, 0x0a /* Public */,
       8,    1,   54,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

       0        // eod
};

void AutomationPattern::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutomationPattern *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->objectDestroyed((*reinterpret_cast< jo_id_t(*)>(_a[1]))); break;
        case 2: _t->flipY((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->flipY(); break;
        case 4: _t->flipX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->flipX(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AutomationPattern::staticMetaObject = { {
    &TrackContentObject::staticMetaObject,
    qt_meta_stringdata_AutomationPattern.data,
    qt_meta_data_AutomationPattern,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutomationPattern::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutomationPattern::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutomationPattern.stringdata0))
        return static_cast<void*>(this);
    return TrackContentObject::qt_metacast(_clname);
}

int AutomationPattern::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackContentObject::qt_metacall(_c, _id, _a);
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
