/****************************************************************************
** Meta object code from reading C++ file 'sf2_player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/sf2_player/sf2_player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sf2_player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sf2Instrument_t {
    QByteArrayData data[15];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sf2Instrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sf2Instrument_t qt_meta_stringdata_sf2Instrument = {
    {
QT_MOC_LITERAL(0, 0, 13), // "sf2Instrument"
QT_MOC_LITERAL(1, 14, 11), // "fileLoading"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "fileChanged"
QT_MOC_LITERAL(4, 39, 12), // "patchChanged"
QT_MOC_LITERAL(5, 52, 8), // "openFile"
QT_MOC_LITERAL(6, 61, 8), // "_sf2File"
QT_MOC_LITERAL(7, 70, 15), // "updateTrackName"
QT_MOC_LITERAL(8, 86, 11), // "updatePatch"
QT_MOC_LITERAL(9, 98, 16), // "updateSampleRate"
QT_MOC_LITERAL(10, 115, 14), // "updateReverbOn"
QT_MOC_LITERAL(11, 130, 12), // "updateReverb"
QT_MOC_LITERAL(12, 143, 14), // "updateChorusOn"
QT_MOC_LITERAL(13, 158, 12), // "updateChorus"
QT_MOC_LITERAL(14, 171, 10) // "updateGain"

    },
    "sf2Instrument\0fileLoading\0\0fileChanged\0"
    "patchChanged\0openFile\0_sf2File\0"
    "updateTrackName\0updatePatch\0"
    "updateSampleRate\0updateReverbOn\0"
    "updateReverb\0updateChorusOn\0updateChorus\0"
    "updateGain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sf2Instrument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   77,    2, 0x0a /* Public */,
       5,    1,   82,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sf2Instrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sf2Instrument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileLoading(); break;
        case 1: _t->fileChanged(); break;
        case 2: _t->patchChanged(); break;
        case 3: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->updatePatch(); break;
        case 6: _t->updateSampleRate(); break;
        case 7: _t->updateReverbOn(); break;
        case 8: _t->updateReverb(); break;
        case 9: _t->updateChorusOn(); break;
        case 10: _t->updateChorus(); break;
        case 11: _t->updateGain(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (sf2Instrument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sf2Instrument::fileLoading)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (sf2Instrument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sf2Instrument::fileChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (sf2Instrument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&sf2Instrument::patchChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject sf2Instrument::staticMetaObject = { {
    &Instrument::staticMetaObject,
    qt_meta_stringdata_sf2Instrument.data,
    qt_meta_data_sf2Instrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sf2Instrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sf2Instrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sf2Instrument.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int sf2Instrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Instrument::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void sf2Instrument::fileLoading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void sf2Instrument::fileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void sf2Instrument::patchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_sf2InstrumentView_t {
    QByteArrayData data[7];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sf2InstrumentView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sf2InstrumentView_t qt_meta_stringdata_sf2InstrumentView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "sf2InstrumentView"
QT_MOC_LITERAL(1, 18, 14), // "invalidateFile"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "showFileDialog"
QT_MOC_LITERAL(4, 49, 15), // "showPatchDialog"
QT_MOC_LITERAL(5, 65, 14), // "updateFilename"
QT_MOC_LITERAL(6, 80, 15) // "updatePatchName"

    },
    "sf2InstrumentView\0invalidateFile\0\0"
    "showFileDialog\0showPatchDialog\0"
    "updateFilename\0updatePatchName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sf2InstrumentView[] = {

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
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    0,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void sf2InstrumentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<sf2InstrumentView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidateFile(); break;
        case 1: _t->showFileDialog(); break;
        case 2: _t->showPatchDialog(); break;
        case 3: _t->updateFilename(); break;
        case 4: _t->updatePatchName(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject sf2InstrumentView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_sf2InstrumentView.data,
    qt_meta_data_sf2InstrumentView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *sf2InstrumentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sf2InstrumentView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sf2InstrumentView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int sf2InstrumentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentViewFixedSize::qt_metacall(_c, _id, _a);
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
