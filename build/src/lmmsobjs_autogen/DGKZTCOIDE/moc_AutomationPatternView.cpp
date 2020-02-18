/****************************************************************************
** Meta object code from reading C++ file 'AutomationPatternView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/AutomationPatternView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutomationPatternView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutomationPatternView_t {
    QByteArrayData data[12];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutomationPatternView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutomationPatternView_t qt_meta_stringdata_AutomationPatternView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AutomationPatternView"
QT_MOC_LITERAL(1, 22, 22), // "openInAutomationEditor"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 6), // "update"
QT_MOC_LITERAL(4, 53, 9), // "resetName"
QT_MOC_LITERAL(5, 63, 10), // "changeName"
QT_MOC_LITERAL(6, 74, 16), // "disconnectObject"
QT_MOC_LITERAL(7, 91, 8), // "QAction*"
QT_MOC_LITERAL(8, 100, 2), // "_a"
QT_MOC_LITERAL(9, 103, 15), // "toggleRecording"
QT_MOC_LITERAL(10, 119, 5), // "flipY"
QT_MOC_LITERAL(11, 125, 5) // "flipX"

    },
    "AutomationPatternView\0openInAutomationEditor\0"
    "\0update\0resetName\0changeName\0"
    "disconnectObject\0QAction*\0_a\0"
    "toggleRecording\0flipY\0flipX"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutomationPatternView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x09 /* Protected */,
       5,    0,   57,    2, 0x09 /* Protected */,
       6,    1,   58,    2, 0x09 /* Protected */,
       9,    0,   61,    2, 0x09 /* Protected */,
      10,    0,   62,    2, 0x09 /* Protected */,
      11,    0,   63,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutomationPatternView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutomationPatternView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openInAutomationEditor(); break;
        case 1: _t->update(); break;
        case 2: _t->resetName(); break;
        case 3: _t->changeName(); break;
        case 4: _t->disconnectObject((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->toggleRecording(); break;
        case 6: _t->flipY(); break;
        case 7: _t->flipX(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AutomationPatternView::staticMetaObject = { {
    &TrackContentObjectView::staticMetaObject,
    qt_meta_stringdata_AutomationPatternView.data,
    qt_meta_data_AutomationPatternView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutomationPatternView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutomationPatternView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutomationPatternView.stringdata0))
        return static_cast<void*>(this);
    return TrackContentObjectView::qt_metacast(_clname);
}

int AutomationPatternView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackContentObjectView::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
