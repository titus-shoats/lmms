/****************************************************************************
** Meta object code from reading C++ file 'SampleBuffer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/SampleBuffer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SampleBuffer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SampleBuffer_t {
    QByteArrayData data[17];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SampleBuffer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SampleBuffer_t qt_meta_stringdata_SampleBuffer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SampleBuffer"
QT_MOC_LITERAL(1, 13, 13), // "sampleUpdated"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "setAudioFile"
QT_MOC_LITERAL(4, 41, 11), // "_audio_file"
QT_MOC_LITERAL(5, 53, 14), // "loadFromBase64"
QT_MOC_LITERAL(6, 68, 5), // "_data"
QT_MOC_LITERAL(7, 74, 13), // "setStartFrame"
QT_MOC_LITERAL(8, 88, 7), // "f_cnt_t"
QT_MOC_LITERAL(9, 96, 2), // "_s"
QT_MOC_LITERAL(10, 99, 11), // "setEndFrame"
QT_MOC_LITERAL(11, 111, 2), // "_e"
QT_MOC_LITERAL(12, 114, 16), // "setAmplification"
QT_MOC_LITERAL(13, 131, 2), // "_a"
QT_MOC_LITERAL(14, 134, 11), // "setReversed"
QT_MOC_LITERAL(15, 146, 3), // "_on"
QT_MOC_LITERAL(16, 150, 17) // "sampleRateChanged"

    },
    "SampleBuffer\0sampleUpdated\0\0setAudioFile\0"
    "_audio_file\0loadFromBase64\0_data\0"
    "setStartFrame\0f_cnt_t\0_s\0setEndFrame\0"
    "_e\0setAmplification\0_a\0setReversed\0"
    "_on\0sampleRateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SampleBuffer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      12,    1,   67,    2, 0x0a /* Public */,
      14,    1,   70,    2, 0x0a /* Public */,
      16,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,

       0        // eod
};

void SampleBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SampleBuffer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sampleUpdated(); break;
        case 1: _t->setAudioFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->loadFromBase64((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setStartFrame((*reinterpret_cast< const f_cnt_t(*)>(_a[1]))); break;
        case 4: _t->setEndFrame((*reinterpret_cast< const f_cnt_t(*)>(_a[1]))); break;
        case 5: _t->setAmplification((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setReversed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->sampleRateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SampleBuffer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SampleBuffer::sampleUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SampleBuffer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_SampleBuffer.data,
    qt_meta_data_SampleBuffer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SampleBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SampleBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SampleBuffer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "sharedObject"))
        return static_cast< sharedObject*>(this);
    return QObject::qt_metacast(_clname);
}

int SampleBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SampleBuffer::sampleUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
