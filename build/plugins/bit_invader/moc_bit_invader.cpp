/****************************************************************************
** Meta object code from reading C++ file 'bit_invader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/bit_invader/bit_invader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bit_invader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bitInvader_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bitInvader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bitInvader_t qt_meta_stringdata_bitInvader = {
    {
QT_MOC_LITERAL(0, 0, 10), // "bitInvader"
QT_MOC_LITERAL(1, 11, 13), // "lengthChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "samplesChanged"
QT_MOC_LITERAL(4, 41, 9) // "normalize"

    },
    "bitInvader\0lengthChanged\0\0samplesChanged\0"
    "normalize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bitInvader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    2,   30,    2, 0x09 /* Protected */,
       4,    0,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,

       0        // eod
};

void bitInvader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<bitInvader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lengthChanged(); break;
        case 1: _t->samplesChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->normalize(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject bitInvader::staticMetaObject = { {
    &Instrument::staticMetaObject,
    qt_meta_stringdata_bitInvader.data,
    qt_meta_data_bitInvader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *bitInvader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bitInvader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bitInvader.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int bitInvader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Instrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_bitInvaderView_t {
    QByteArrayData data[12];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bitInvaderView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bitInvaderView_t qt_meta_stringdata_bitInvaderView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "bitInvaderView"
QT_MOC_LITERAL(1, 15, 20), // "interpolationToggled"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 16), // "normalizeToggled"
QT_MOC_LITERAL(5, 60, 14), // "sinWaveClicked"
QT_MOC_LITERAL(6, 75, 19), // "triangleWaveClicked"
QT_MOC_LITERAL(7, 95, 14), // "sqrWaveClicked"
QT_MOC_LITERAL(8, 110, 14), // "sawWaveClicked"
QT_MOC_LITERAL(9, 125, 16), // "noiseWaveClicked"
QT_MOC_LITERAL(10, 142, 14), // "usrWaveClicked"
QT_MOC_LITERAL(11, 157, 13) // "smoothClicked"

    },
    "bitInvaderView\0interpolationToggled\0"
    "\0value\0normalizeToggled\0sinWaveClicked\0"
    "triangleWaveClicked\0sqrWaveClicked\0"
    "sawWaveClicked\0noiseWaveClicked\0"
    "usrWaveClicked\0smoothClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bitInvaderView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x09 /* Protected */,
       4,    1,   62,    2, 0x09 /* Protected */,
       5,    0,   65,    2, 0x09 /* Protected */,
       6,    0,   66,    2, 0x09 /* Protected */,
       7,    0,   67,    2, 0x09 /* Protected */,
       8,    0,   68,    2, 0x09 /* Protected */,
       9,    0,   69,    2, 0x09 /* Protected */,
      10,    0,   70,    2, 0x09 /* Protected */,
      11,    0,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void bitInvaderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<bitInvaderView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->interpolationToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->normalizeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sinWaveClicked(); break;
        case 3: _t->triangleWaveClicked(); break;
        case 4: _t->sqrWaveClicked(); break;
        case 5: _t->sawWaveClicked(); break;
        case 6: _t->noiseWaveClicked(); break;
        case 7: _t->usrWaveClicked(); break;
        case 8: _t->smoothClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject bitInvaderView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_bitInvaderView.data,
    qt_meta_data_bitInvaderView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *bitInvaderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bitInvaderView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bitInvaderView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int bitInvaderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentViewFixedSize::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
