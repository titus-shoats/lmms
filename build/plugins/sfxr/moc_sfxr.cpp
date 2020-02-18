/****************************************************************************
** Meta object code from reading C++ file 'sfxr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/sfxr/sfxr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sfxr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sfxrInstrument_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sfxrInstrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sfxrInstrument_t qt_meta_stringdata_sfxrInstrument = {
    {
QT_MOC_LITERAL(0, 0, 14) // "sfxrInstrument"

    },
    "sfxrInstrument"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sfxrInstrument[] = {

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

void sfxrInstrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject sfxrInstrument::staticMetaObject = { {
    &Instrument::staticMetaObject,
    qt_meta_stringdata_sfxrInstrument.data,
    qt_meta_data_sfxrInstrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sfxrInstrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sfxrInstrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sfxrInstrument.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int sfxrInstrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Instrument::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_sfxrInstrumentView_t {
    QByteArrayData data[12];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sfxrInstrumentView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sfxrInstrumentView_t qt_meta_stringdata_sfxrInstrumentView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "sfxrInstrumentView"
QT_MOC_LITERAL(1, 19, 9), // "genPickup"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "genLaser"
QT_MOC_LITERAL(4, 39, 12), // "genExplosion"
QT_MOC_LITERAL(5, 52, 10), // "genPowerup"
QT_MOC_LITERAL(6, 63, 6), // "genHit"
QT_MOC_LITERAL(7, 70, 7), // "genJump"
QT_MOC_LITERAL(8, 78, 7), // "genBlip"
QT_MOC_LITERAL(9, 86, 9), // "randomize"
QT_MOC_LITERAL(10, 96, 6), // "mutate"
QT_MOC_LITERAL(11, 103, 12) // "previewSound"

    },
    "sfxrInstrumentView\0genPickup\0\0genLaser\0"
    "genExplosion\0genPowerup\0genHit\0genJump\0"
    "genBlip\0randomize\0mutate\0previewSound"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sfxrInstrumentView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x09 /* Protected */,
       3,    0,   65,    2, 0x09 /* Protected */,
       4,    0,   66,    2, 0x09 /* Protected */,
       5,    0,   67,    2, 0x09 /* Protected */,
       6,    0,   68,    2, 0x09 /* Protected */,
       7,    0,   69,    2, 0x09 /* Protected */,
       8,    0,   70,    2, 0x09 /* Protected */,
       9,    0,   71,    2, 0x09 /* Protected */,
      10,    0,   72,    2, 0x09 /* Protected */,
      11,    0,   73,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sfxrInstrumentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sfxrInstrumentView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->genPickup(); break;
        case 1: _t->genLaser(); break;
        case 2: _t->genExplosion(); break;
        case 3: _t->genPowerup(); break;
        case 4: _t->genHit(); break;
        case 5: _t->genJump(); break;
        case 6: _t->genBlip(); break;
        case 7: _t->randomize(); break;
        case 8: _t->mutate(); break;
        case 9: _t->previewSound(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject sfxrInstrumentView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_sfxrInstrumentView.data,
    qt_meta_data_sfxrInstrumentView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sfxrInstrumentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sfxrInstrumentView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sfxrInstrumentView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int sfxrInstrumentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentViewFixedSize::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
