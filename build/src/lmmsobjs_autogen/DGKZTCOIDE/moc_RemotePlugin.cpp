/****************************************************************************
** Meta object code from reading C++ file 'RemotePlugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/RemotePlugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RemotePlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProcessWatcher_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessWatcher_t qt_meta_stringdata_ProcessWatcher = {
    {
QT_MOC_LITERAL(0, 0, 14) // "ProcessWatcher"

    },
    "ProcessWatcher"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessWatcher[] = {

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

void ProcessWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ProcessWatcher::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_ProcessWatcher.data,
    qt_meta_data_ProcessWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProcessWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessWatcher.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ProcessWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RemotePlugin_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemotePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemotePlugin_t qt_meta_stringdata_RemotePlugin = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RemotePlugin"
QT_MOC_LITERAL(1, 13, 6), // "showUI"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 6), // "hideUI"
QT_MOC_LITERAL(4, 28, 15), // "processFinished"
QT_MOC_LITERAL(5, 44, 8), // "exitCode"
QT_MOC_LITERAL(6, 53, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(7, 74, 10), // "exitStatus"
QT_MOC_LITERAL(8, 85, 14), // "processErrored"
QT_MOC_LITERAL(9, 100, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(10, 123, 3) // "err"

    },
    "RemotePlugin\0showUI\0\0hideUI\0processFinished\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus\0"
    "processErrored\0QProcess::ProcessError\0"
    "err"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemotePlugin[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    2,   36,    2, 0x08 /* Private */,
       8,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void RemotePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemotePlugin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showUI(); break;
        case 1: _t->hideUI(); break;
        case 2: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->processErrored((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RemotePlugin::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_RemotePlugin.data,
    qt_meta_data_RemotePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RemotePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemotePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemotePlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "RemotePluginBase"))
        return static_cast< RemotePluginBase*>(this);
    return QObject::qt_metacast(_clname);
}

int RemotePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
