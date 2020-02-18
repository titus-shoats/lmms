/****************************************************************************
** Meta object code from reading C++ file 'ZynAddSubFx.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/zynaddsubfx/ZynAddSubFx.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ZynAddSubFx.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ZynAddSubFxRemotePlugin_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZynAddSubFxRemotePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZynAddSubFxRemotePlugin_t qt_meta_stringdata_ZynAddSubFxRemotePlugin = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ZynAddSubFxRemotePlugin"
QT_MOC_LITERAL(1, 24, 18), // "clickedCloseButton"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "ZynAddSubFxRemotePlugin\0clickedCloseButton\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZynAddSubFxRemotePlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ZynAddSubFxRemotePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZynAddSubFxRemotePlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickedCloseButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZynAddSubFxRemotePlugin::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZynAddSubFxRemotePlugin::clickedCloseButton)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ZynAddSubFxRemotePlugin::staticMetaObject = { {
    &RemotePlugin::staticMetaObject,
    qt_meta_stringdata_ZynAddSubFxRemotePlugin.data,
    qt_meta_data_ZynAddSubFxRemotePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZynAddSubFxRemotePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZynAddSubFxRemotePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZynAddSubFxRemotePlugin.stringdata0))
        return static_cast<void*>(this);
    return RemotePlugin::qt_metacast(_clname);
}

int ZynAddSubFxRemotePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RemotePlugin::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ZynAddSubFxRemotePlugin::clickedCloseButton()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ZynAddSubFxInstrument_t {
    QByteArrayData data[12];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZynAddSubFxInstrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZynAddSubFxInstrument_t qt_meta_stringdata_ZynAddSubFxInstrument = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ZynAddSubFxInstrument"
QT_MOC_LITERAL(1, 22, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "reloadPlugin"
QT_MOC_LITERAL(4, 52, 16), // "updatePitchRange"
QT_MOC_LITERAL(5, 69, 16), // "updatePortamento"
QT_MOC_LITERAL(6, 86, 16), // "updateFilterFreq"
QT_MOC_LITERAL(7, 103, 13), // "updateFilterQ"
QT_MOC_LITERAL(8, 117, 15), // "updateBandwidth"
QT_MOC_LITERAL(9, 133, 12), // "updateFmGain"
QT_MOC_LITERAL(10, 146, 19), // "updateResCenterFreq"
QT_MOC_LITERAL(11, 166, 18) // "updateResBandwidth"

    },
    "ZynAddSubFxInstrument\0settingsChanged\0"
    "\0reloadPlugin\0updatePitchRange\0"
    "updatePortamento\0updateFilterFreq\0"
    "updateFilterQ\0updateBandwidth\0"
    "updateFmGain\0updateResCenterFreq\0"
    "updateResBandwidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZynAddSubFxInstrument[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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

       0        // eod
};

void ZynAddSubFxInstrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZynAddSubFxInstrument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->reloadPlugin(); break;
        case 2: _t->updatePitchRange(); break;
        case 3: _t->updatePortamento(); break;
        case 4: _t->updateFilterFreq(); break;
        case 5: _t->updateFilterQ(); break;
        case 6: _t->updateBandwidth(); break;
        case 7: _t->updateFmGain(); break;
        case 8: _t->updateResCenterFreq(); break;
        case 9: _t->updateResBandwidth(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ZynAddSubFxInstrument::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ZynAddSubFxInstrument::settingsChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ZynAddSubFxInstrument::staticMetaObject = { {
    &Instrument::staticMetaObject,
    qt_meta_stringdata_ZynAddSubFxInstrument.data,
    qt_meta_data_ZynAddSubFxInstrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZynAddSubFxInstrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZynAddSubFxInstrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZynAddSubFxInstrument.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int ZynAddSubFxInstrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Instrument::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ZynAddSubFxInstrument::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ZynAddSubFxView_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZynAddSubFxView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZynAddSubFxView_t qt_meta_stringdata_ZynAddSubFxView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ZynAddSubFxView"
QT_MOC_LITERAL(1, 16, 8), // "toggleUI"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "ZynAddSubFxView\0toggleUI\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZynAddSubFxView[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ZynAddSubFxView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZynAddSubFxView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleUI(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ZynAddSubFxView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_ZynAddSubFxView.data,
    qt_meta_data_ZynAddSubFxView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ZynAddSubFxView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZynAddSubFxView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZynAddSubFxView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int ZynAddSubFxView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
