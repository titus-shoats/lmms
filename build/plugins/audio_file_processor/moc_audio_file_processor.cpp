/****************************************************************************
** Meta object code from reading C++ file 'audio_file_processor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/audio_file_processor/audio_file_processor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'audio_file_processor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_audioFileProcessor_t {
    QByteArrayData data[15];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_audioFileProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_audioFileProcessor_t qt_meta_stringdata_audioFileProcessor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "audioFileProcessor"
QT_MOC_LITERAL(1, 19, 9), // "isPlaying"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "f_cnt_t"
QT_MOC_LITERAL(4, 38, 14), // "_current_frame"
QT_MOC_LITERAL(5, 53, 12), // "setAudioFile"
QT_MOC_LITERAL(6, 66, 11), // "_audio_file"
QT_MOC_LITERAL(7, 78, 7), // "_rename"
QT_MOC_LITERAL(8, 86, 19), // "reverseModelChanged"
QT_MOC_LITERAL(9, 106, 15), // "ampModelChanged"
QT_MOC_LITERAL(10, 122, 16), // "loopPointChanged"
QT_MOC_LITERAL(11, 139, 17), // "startPointChanged"
QT_MOC_LITERAL(12, 157, 15), // "endPointChanged"
QT_MOC_LITERAL(13, 173, 12), // "pointChanged"
QT_MOC_LITERAL(14, 186, 19) // "stutterModelChanged"

    },
    "audioFileProcessor\0isPlaying\0\0f_cnt_t\0"
    "_current_frame\0setAudioFile\0_audio_file\0"
    "_rename\0reverseModelChanged\0ampModelChanged\0"
    "loopPointChanged\0startPointChanged\0"
    "endPointChanged\0pointChanged\0"
    "stutterModelChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_audioFileProcessor[] = {

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
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   67,    2, 0x0a /* Public */,
       5,    1,   72,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

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

void audioFileProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<audioFileProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isPlaying((*reinterpret_cast< f_cnt_t(*)>(_a[1]))); break;
        case 1: _t->setAudioFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setAudioFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->reverseModelChanged(); break;
        case 4: _t->ampModelChanged(); break;
        case 5: _t->loopPointChanged(); break;
        case 6: _t->startPointChanged(); break;
        case 7: _t->endPointChanged(); break;
        case 8: _t->pointChanged(); break;
        case 9: _t->stutterModelChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (audioFileProcessor::*)(f_cnt_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&audioFileProcessor::isPlaying)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject audioFileProcessor::staticMetaObject = { {
    &Instrument::staticMetaObject,
    qt_meta_stringdata_audioFileProcessor.data,
    qt_meta_data_audioFileProcessor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *audioFileProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *audioFileProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_audioFileProcessor.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int audioFileProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void audioFileProcessor::isPlaying(f_cnt_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AudioFileProcessorView_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioFileProcessorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioFileProcessorView_t qt_meta_stringdata_AudioFileProcessorView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AudioFileProcessorView"
QT_MOC_LITERAL(1, 23, 13), // "sampleUpdated"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13) // "openAudioFile"

    },
    "AudioFileProcessorView\0sampleUpdated\0"
    "\0openAudioFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioFileProcessorView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AudioFileProcessorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioFileProcessorView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sampleUpdated(); break;
        case 1: _t->openAudioFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AudioFileProcessorView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_AudioFileProcessorView.data,
    qt_meta_data_AudioFileProcessorView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioFileProcessorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioFileProcessorView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioFileProcessorView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int AudioFileProcessorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentViewFixedSize::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_AudioFileProcessorWaveView_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioFileProcessorWaveView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioFileProcessorWaveView_t qt_meta_stringdata_AudioFileProcessorWaveView = {
    {
QT_MOC_LITERAL(0, 0, 26), // "AudioFileProcessorWaveView"
QT_MOC_LITERAL(1, 27, 6), // "update"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "isPlaying"
QT_MOC_LITERAL(4, 45, 7), // "f_cnt_t"
QT_MOC_LITERAL(5, 53, 14) // "_current_frame"

    },
    "AudioFileProcessorWaveView\0update\0\0"
    "isPlaying\0f_cnt_t\0_current_frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioFileProcessorWaveView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void AudioFileProcessorWaveView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioFileProcessorWaveView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->isPlaying((*reinterpret_cast< f_cnt_t(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioFileProcessorWaveView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_AudioFileProcessorWaveView.data,
    qt_meta_data_AudioFileProcessorWaveView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioFileProcessorWaveView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioFileProcessorWaveView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioFileProcessorWaveView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AudioFileProcessorWaveView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
