/****************************************************************************
** Meta object code from reading C++ file 'VstPlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/vst_base/VstPlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VstPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VstPlugin_t {
    QByteArrayData data[21];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VstPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VstPlugin_t qt_meta_stringdata_VstPlugin = {
    {
QT_MOC_LITERAL(0, 0, 9), // "VstPlugin"
QT_MOC_LITERAL(1, 10, 8), // "setTempo"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "bpm_t"
QT_MOC_LITERAL(4, 26, 4), // "_bpm"
QT_MOC_LITERAL(5, 31, 16), // "updateSampleRate"
QT_MOC_LITERAL(6, 48, 10), // "openPreset"
QT_MOC_LITERAL(7, 59, 10), // "setProgram"
QT_MOC_LITERAL(8, 70, 5), // "index"
QT_MOC_LITERAL(9, 76, 13), // "rotateProgram"
QT_MOC_LITERAL(10, 90, 6), // "offset"
QT_MOC_LITERAL(11, 97, 16), // "loadProgramNames"
QT_MOC_LITERAL(12, 114, 10), // "savePreset"
QT_MOC_LITERAL(13, 125, 8), // "setParam"
QT_MOC_LITERAL(14, 134, 1), // "i"
QT_MOC_LITERAL(15, 136, 1), // "f"
QT_MOC_LITERAL(16, 138, 10), // "idleUpdate"
QT_MOC_LITERAL(17, 149, 6), // "showUI"
QT_MOC_LITERAL(18, 156, 6), // "hideUI"
QT_MOC_LITERAL(19, 163, 8), // "toggleUI"
QT_MOC_LITERAL(20, 172, 17) // "handleClientEmbed"

    },
    "VstPlugin\0setTempo\0\0bpm_t\0_bpm\0"
    "updateSampleRate\0openPreset\0setProgram\0"
    "index\0rotateProgram\0offset\0loadProgramNames\0"
    "savePreset\0setParam\0i\0f\0idleUpdate\0"
    "showUI\0hideUI\0toggleUI\0handleClientEmbed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VstPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    1,   84,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,
      13,    2,   92,    2, 0x0a /* Public */,
      16,    0,   97,    2, 0x0a /* Public */,
      17,    0,   98,    2, 0x0a /* Public */,
      18,    0,   99,    2, 0x0a /* Public */,
      19,    0,  100,    2, 0x0a /* Public */,
      20,    0,  101,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VstPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VstPlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTempo((*reinterpret_cast< bpm_t(*)>(_a[1]))); break;
        case 1: _t->updateSampleRate(); break;
        case 2: _t->openPreset(); break;
        case 3: _t->setProgram((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->rotateProgram((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->loadProgramNames(); break;
        case 6: _t->savePreset(); break;
        case 7: _t->setParam((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->idleUpdate(); break;
        case 9: _t->showUI(); break;
        case 10: _t->hideUI(); break;
        case 11: _t->toggleUI(); break;
        case 12: _t->handleClientEmbed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VstPlugin::staticMetaObject = { {
    &RemotePlugin::staticMetaObject,
    qt_meta_stringdata_VstPlugin.data,
    qt_meta_data_VstPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VstPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VstPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VstPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "JournallingObject"))
        return static_cast< JournallingObject*>(this);
    return RemotePlugin::qt_metacast(_clname);
}

int VstPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RemotePlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
