/****************************************************************************
** Meta object code from reading C++ file 'MidiAlsaSeq.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/MidiAlsaSeq.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MidiAlsaSeq.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MidiAlsaSeq_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MidiAlsaSeq_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MidiAlsaSeq_t qt_meta_stringdata_MidiAlsaSeq = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MidiAlsaSeq"
QT_MOC_LITERAL(1, 12, 20), // "readablePortsChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "writablePortsChanged"
QT_MOC_LITERAL(4, 55, 16), // "changeQueueTempo"
QT_MOC_LITERAL(5, 72, 5), // "bpm_t"
QT_MOC_LITERAL(6, 78, 4), // "_bpm"
QT_MOC_LITERAL(7, 83, 14) // "updatePortList"

    },
    "MidiAlsaSeq\0readablePortsChanged\0\0"
    "writablePortsChanged\0changeQueueTempo\0"
    "bpm_t\0_bpm\0updatePortList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MidiAlsaSeq[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void MidiAlsaSeq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MidiAlsaSeq *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readablePortsChanged(); break;
        case 1: _t->writablePortsChanged(); break;
        case 2: _t->changeQueueTempo((*reinterpret_cast< bpm_t(*)>(_a[1]))); break;
        case 3: _t->updatePortList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MidiAlsaSeq::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MidiAlsaSeq::readablePortsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MidiAlsaSeq::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MidiAlsaSeq::writablePortsChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MidiAlsaSeq::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_MidiAlsaSeq.data,
    qt_meta_data_MidiAlsaSeq,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MidiAlsaSeq::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MidiAlsaSeq::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MidiAlsaSeq.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MidiClient"))
        return static_cast< MidiClient*>(this);
    return QThread::qt_metacast(_clname);
}

int MidiAlsaSeq::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MidiAlsaSeq::readablePortsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MidiAlsaSeq::writablePortsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
