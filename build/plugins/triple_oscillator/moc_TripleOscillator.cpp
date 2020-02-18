/****************************************************************************
** Meta object code from reading C++ file 'TripleOscillator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/triple_oscillator/TripleOscillator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TripleOscillator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OscillatorObject_t {
    QByteArrayData data[8];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OscillatorObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OscillatorObject_t qt_meta_stringdata_OscillatorObject = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OscillatorObject"
QT_MOC_LITERAL(1, 17, 22), // "oscUserDefWaveDblClick"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "updateVolume"
QT_MOC_LITERAL(4, 54, 18), // "updateDetuningLeft"
QT_MOC_LITERAL(5, 73, 19), // "updateDetuningRight"
QT_MOC_LITERAL(6, 93, 21), // "updatePhaseOffsetLeft"
QT_MOC_LITERAL(7, 115, 22) // "updatePhaseOffsetRight"

    },
    "OscillatorObject\0oscUserDefWaveDblClick\0"
    "\0updateVolume\0updateDetuningLeft\0"
    "updateDetuningRight\0updatePhaseOffsetLeft\0"
    "updatePhaseOffsetRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OscillatorObject[] = {

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
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OscillatorObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OscillatorObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->oscUserDefWaveDblClick(); break;
        case 1: _t->updateVolume(); break;
        case 2: _t->updateDetuningLeft(); break;
        case 3: _t->updateDetuningRight(); break;
        case 4: _t->updatePhaseOffsetLeft(); break;
        case 5: _t->updatePhaseOffsetRight(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject OscillatorObject::staticMetaObject = { {
    &Model::staticMetaObject,
    qt_meta_stringdata_OscillatorObject.data,
    qt_meta_data_OscillatorObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OscillatorObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OscillatorObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OscillatorObject.stringdata0))
        return static_cast<void*>(this);
    return Model::qt_metacast(_clname);
}

int OscillatorObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_TripleOscillator_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TripleOscillator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TripleOscillator_t qt_meta_stringdata_TripleOscillator = {
    {
QT_MOC_LITERAL(0, 0, 16), // "TripleOscillator"
QT_MOC_LITERAL(1, 17, 17), // "updateAllDetuning"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "TripleOscillator\0updateAllDetuning\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TripleOscillator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TripleOscillator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TripleOscillator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAllDetuning(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TripleOscillator::staticMetaObject = { {
    &Instrument::staticMetaObject,
    qt_meta_stringdata_TripleOscillator.data,
    qt_meta_data_TripleOscillator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TripleOscillator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TripleOscillator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TripleOscillator.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int TripleOscillator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Instrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_TripleOscillatorView_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TripleOscillatorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TripleOscillatorView_t qt_meta_stringdata_TripleOscillatorView = {
    {
QT_MOC_LITERAL(0, 0, 20) // "TripleOscillatorView"

    },
    "TripleOscillatorView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TripleOscillatorView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TripleOscillatorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TripleOscillatorView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_TripleOscillatorView.data,
    qt_meta_data_TripleOscillatorView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TripleOscillatorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TripleOscillatorView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TripleOscillatorView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int TripleOscillatorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentViewFixedSize::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
