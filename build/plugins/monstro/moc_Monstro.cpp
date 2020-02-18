/****************************************************************************
** Meta object code from reading C++ file 'Monstro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/monstro/Monstro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Monstro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MonstroInstrument_t {
    QByteArrayData data[17];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MonstroInstrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MonstroInstrument_t qt_meta_stringdata_MonstroInstrument = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MonstroInstrument"
QT_MOC_LITERAL(1, 18, 13), // "updateVolume1"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "updateVolume2"
QT_MOC_LITERAL(4, 47, 13), // "updateVolume3"
QT_MOC_LITERAL(5, 61, 11), // "updateFreq1"
QT_MOC_LITERAL(6, 73, 11), // "updateFreq2"
QT_MOC_LITERAL(7, 85, 11), // "updateFreq3"
QT_MOC_LITERAL(8, 97, 9), // "updatePO1"
QT_MOC_LITERAL(9, 107, 9), // "updatePO2"
QT_MOC_LITERAL(10, 117, 9), // "updatePO3"
QT_MOC_LITERAL(11, 127, 15), // "updateEnvelope1"
QT_MOC_LITERAL(12, 143, 15), // "updateEnvelope2"
QT_MOC_LITERAL(13, 159, 13), // "updateLFOAtts"
QT_MOC_LITERAL(14, 173, 16), // "updateSamplerate"
QT_MOC_LITERAL(15, 190, 12), // "updateSlope1"
QT_MOC_LITERAL(16, 203, 12) // "updateSlope2"

    },
    "MonstroInstrument\0updateVolume1\0\0"
    "updateVolume2\0updateVolume3\0updateFreq1\0"
    "updateFreq2\0updateFreq3\0updatePO1\0"
    "updatePO2\0updatePO3\0updateEnvelope1\0"
    "updateEnvelope2\0updateLFOAtts\0"
    "updateSamplerate\0updateSlope1\0"
    "updateSlope2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MonstroInstrument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    0,  103,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MonstroInstrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MonstroInstrument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateVolume1(); break;
        case 1: _t->updateVolume2(); break;
        case 2: _t->updateVolume3(); break;
        case 3: _t->updateFreq1(); break;
        case 4: _t->updateFreq2(); break;
        case 5: _t->updateFreq3(); break;
        case 6: _t->updatePO1(); break;
        case 7: _t->updatePO2(); break;
        case 8: _t->updatePO3(); break;
        case 9: _t->updateEnvelope1(); break;
        case 10: _t->updateEnvelope2(); break;
        case 11: _t->updateLFOAtts(); break;
        case 12: _t->updateSamplerate(); break;
        case 13: _t->updateSlope1(); break;
        case 14: _t->updateSlope2(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MonstroInstrument::staticMetaObject = { {
    &Instrument::staticMetaObject,
    qt_meta_stringdata_MonstroInstrument.data,
    qt_meta_data_MonstroInstrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MonstroInstrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MonstroInstrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MonstroInstrument.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int MonstroInstrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Instrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
struct qt_meta_stringdata_MonstroView_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MonstroView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MonstroView_t qt_meta_stringdata_MonstroView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MonstroView"
QT_MOC_LITERAL(1, 12, 12), // "updateLayout"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "MonstroView\0updateLayout\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MonstroView[] = {

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

void MonstroView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MonstroView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLayout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MonstroView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_MonstroView.data,
    qt_meta_data_MonstroView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MonstroView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MonstroView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MonstroView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int MonstroView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentViewFixedSize::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
