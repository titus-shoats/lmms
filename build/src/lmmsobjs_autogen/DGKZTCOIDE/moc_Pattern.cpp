/****************************************************************************
** Meta object code from reading C++ file 'Pattern.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/Pattern.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pattern.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Pattern_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pattern_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pattern_t qt_meta_stringdata_Pattern = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Pattern"
QT_MOC_LITERAL(1, 8, 16), // "destroyedPattern"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "Pattern*"
QT_MOC_LITERAL(4, 35, 8), // "addSteps"
QT_MOC_LITERAL(5, 44, 10), // "cloneSteps"
QT_MOC_LITERAL(6, 55, 11), // "removeSteps"
QT_MOC_LITERAL(7, 67, 5), // "clear"
QT_MOC_LITERAL(8, 73, 19) // "changeTimeSignature"

    },
    "Pattern\0destroyedPattern\0\0Pattern*\0"
    "addSteps\0cloneSteps\0removeSteps\0clear\0"
    "changeTimeSignature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pattern[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x09 /* Protected */,
       5,    0,   48,    2, 0x09 /* Protected */,
       6,    0,   49,    2, 0x09 /* Protected */,
       7,    0,   50,    2, 0x09 /* Protected */,
       8,    0,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Pattern::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Pattern *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->destroyedPattern((*reinterpret_cast< Pattern*(*)>(_a[1]))); break;
        case 1: _t->addSteps(); break;
        case 2: _t->cloneSteps(); break;
        case 3: _t->removeSteps(); break;
        case 4: _t->clear(); break;
        case 5: _t->changeTimeSignature(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Pattern* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Pattern::*)(Pattern * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pattern::destroyedPattern)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Pattern::staticMetaObject = { {
    &TrackContentObject::staticMetaObject,
    qt_meta_stringdata_Pattern.data,
    qt_meta_data_Pattern,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Pattern::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pattern::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pattern.stringdata0))
        return static_cast<void*>(this);
    return TrackContentObject::qt_metacast(_clname);
}

int Pattern::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackContentObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Pattern::destroyedPattern(Pattern * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PatternView_t {
    QByteArrayData data[11];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PatternView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PatternView_t qt_meta_stringdata_PatternView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PatternView"
QT_MOC_LITERAL(1, 12, 6), // "update"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 15), // "openInPianoRoll"
QT_MOC_LITERAL(4, 36, 19), // "setGhostInPianoRoll"
QT_MOC_LITERAL(5, 56, 9), // "resetName"
QT_MOC_LITERAL(6, 66, 10), // "changeName"
QT_MOC_LITERAL(7, 77, 13), // "noteFillColor"
QT_MOC_LITERAL(8, 91, 15), // "noteBorderColor"
QT_MOC_LITERAL(9, 107, 18), // "mutedNoteFillColor"
QT_MOC_LITERAL(10, 126, 20) // "mutedNoteBorderColor"

    },
    "PatternView\0update\0\0openInPianoRoll\0"
    "setGhostInPianoRoll\0resetName\0changeName\0"
    "noteFillColor\0noteBorderColor\0"
    "mutedNoteFillColor\0mutedNoteBorderColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PatternView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
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

 // properties: name, type, flags
       7, QMetaType::QColor, 0x00095103,
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::QColor, 0x00095103,
      10, QMetaType::QColor, 0x00095103,

       0        // eod
};

void PatternView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PatternView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->openInPianoRoll(); break;
        case 2: _t->setGhostInPianoRoll(); break;
        case 3: _t->resetName(); break;
        case 4: _t->changeName(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PatternView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getNoteFillColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getNoteBorderColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getMutedNoteFillColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getMutedNoteBorderColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PatternView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNoteFillColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setNoteBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setMutedNoteFillColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setMutedNoteBorderColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PatternView::staticMetaObject = { {
    &TrackContentObjectView::staticMetaObject,
    qt_meta_stringdata_PatternView.data,
    qt_meta_data_PatternView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PatternView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PatternView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PatternView.stringdata0))
        return static_cast<void*>(this);
    return TrackContentObjectView::qt_metacast(_clname);
}

int PatternView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackContentObjectView::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
