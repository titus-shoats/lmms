/****************************************************************************
** Meta object code from reading C++ file 'vestige.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/vestige/vestige.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vestige.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_vestigeInstrument_t {
    QByteArrayData data[10];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vestigeInstrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vestigeInstrument_t qt_meta_stringdata_vestigeInstrument = {
    {
QT_MOC_LITERAL(0, 0, 17), // "vestigeInstrument"
QT_MOC_LITERAL(1, 18, 12), // "setParameter"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "Model*"
QT_MOC_LITERAL(4, 39, 6), // "action"
QT_MOC_LITERAL(5, 46, 18), // "handleConfigChange"
QT_MOC_LITERAL(6, 65, 3), // "cls"
QT_MOC_LITERAL(7, 69, 4), // "attr"
QT_MOC_LITERAL(8, 74, 5), // "value"
QT_MOC_LITERAL(9, 80, 12) // "reloadPlugin"

    },
    "vestigeInstrument\0setParameter\0\0Model*\0"
    "action\0handleConfigChange\0cls\0attr\0"
    "value\0reloadPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vestigeInstrument[] = {

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
       1,    1,   29,    2, 0x09 /* Protected */,
       5,    3,   32,    2, 0x09 /* Protected */,
       9,    0,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void,

       0        // eod
};

void vestigeInstrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<vestigeInstrument *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setParameter((*reinterpret_cast< Model*(*)>(_a[1]))); break;
        case 1: _t->handleConfigChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->reloadPlugin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Model* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject vestigeInstrument::staticMetaObject = { {
    &Instrument::staticMetaObject,
    qt_meta_stringdata_vestigeInstrument.data,
    qt_meta_data_vestigeInstrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *vestigeInstrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vestigeInstrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vestigeInstrument.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int vestigeInstrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_manageVestigeInstrumentView_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manageVestigeInstrumentView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manageVestigeInstrumentView_t qt_meta_stringdata_manageVestigeInstrumentView = {
    {
QT_MOC_LITERAL(0, 0, 27), // "manageVestigeInstrumentView"
QT_MOC_LITERAL(1, 28, 10), // "syncPlugin"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "displayAutomatedOnly"
QT_MOC_LITERAL(4, 61, 12), // "setParameter"
QT_MOC_LITERAL(5, 74, 6), // "Model*"
QT_MOC_LITERAL(6, 81, 6), // "action"
QT_MOC_LITERAL(7, 88, 11) // "closeWindow"

    },
    "manageVestigeInstrumentView\0syncPlugin\0"
    "\0displayAutomatedOnly\0setParameter\0"
    "Model*\0action\0closeWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manageVestigeInstrumentView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    1,   36,    2, 0x09 /* Protected */,
       7,    0,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void manageVestigeInstrumentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<manageVestigeInstrumentView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->syncPlugin(); break;
        case 1: _t->displayAutomatedOnly(); break;
        case 2: _t->setParameter((*reinterpret_cast< Model*(*)>(_a[1]))); break;
        case 3: _t->closeWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Model* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject manageVestigeInstrumentView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_manageVestigeInstrumentView.data,
    qt_meta_data_manageVestigeInstrumentView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *manageVestigeInstrumentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manageVestigeInstrumentView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_manageVestigeInstrumentView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int manageVestigeInstrumentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentViewFixedSize::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_VestigeInstrumentView_t {
    QByteArrayData data[12];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VestigeInstrumentView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VestigeInstrumentView_t qt_meta_stringdata_VestigeInstrumentView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "VestigeInstrumentView"
QT_MOC_LITERAL(1, 22, 10), // "updateMenu"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "openPlugin"
QT_MOC_LITERAL(4, 45, 12), // "managePlugin"
QT_MOC_LITERAL(5, 58, 10), // "openPreset"
QT_MOC_LITERAL(6, 69, 10), // "savePreset"
QT_MOC_LITERAL(7, 80, 11), // "nextProgram"
QT_MOC_LITERAL(8, 92, 15), // "previousProgram"
QT_MOC_LITERAL(9, 108, 9), // "selPreset"
QT_MOC_LITERAL(10, 118, 9), // "toggleGUI"
QT_MOC_LITERAL(11, 128, 10) // "noteOffAll"

    },
    "VestigeInstrumentView\0updateMenu\0\0"
    "openPlugin\0managePlugin\0openPreset\0"
    "savePreset\0nextProgram\0previousProgram\0"
    "selPreset\0toggleGUI\0noteOffAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VestigeInstrumentView[] = {

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

void VestigeInstrumentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VestigeInstrumentView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMenu(); break;
        case 1: _t->openPlugin(); break;
        case 2: _t->managePlugin(); break;
        case 3: _t->openPreset(); break;
        case 4: _t->savePreset(); break;
        case 5: _t->nextProgram(); break;
        case 6: _t->previousProgram(); break;
        case 7: _t->selPreset(); break;
        case 8: _t->toggleGUI(); break;
        case 9: _t->noteOffAll(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VestigeInstrumentView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_VestigeInstrumentView.data,
    qt_meta_data_VestigeInstrumentView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VestigeInstrumentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VestigeInstrumentView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VestigeInstrumentView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int VestigeInstrumentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
