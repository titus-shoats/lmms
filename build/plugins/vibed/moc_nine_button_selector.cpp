/****************************************************************************
** Meta object code from reading C++ file 'nine_button_selector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/vibed/nine_button_selector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nine_button_selector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nineButtonSelector_t {
    QByteArrayData data[14];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nineButtonSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nineButtonSelector_t qt_meta_stringdata_nineButtonSelector = {
    {
QT_MOC_LITERAL(0, 0, 18), // "nineButtonSelector"
QT_MOC_LITERAL(1, 19, 19), // "nineButtonSelection"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "button0Clicked"
QT_MOC_LITERAL(4, 55, 14), // "button1Clicked"
QT_MOC_LITERAL(5, 70, 14), // "button2Clicked"
QT_MOC_LITERAL(6, 85, 14), // "button3Clicked"
QT_MOC_LITERAL(7, 100, 14), // "button4Clicked"
QT_MOC_LITERAL(8, 115, 14), // "button5Clicked"
QT_MOC_LITERAL(9, 130, 14), // "button6Clicked"
QT_MOC_LITERAL(10, 145, 14), // "button7Clicked"
QT_MOC_LITERAL(11, 160, 14), // "button8Clicked"
QT_MOC_LITERAL(12, 175, 16), // "contextMenuEvent"
QT_MOC_LITERAL(13, 192, 18) // "QContextMenuEvent*"

    },
    "nineButtonSelector\0nineButtonSelection\0"
    "\0button0Clicked\0button1Clicked\0"
    "button2Clicked\0button3Clicked\0"
    "button4Clicked\0button5Clicked\0"
    "button6Clicked\0button7Clicked\0"
    "button8Clicked\0contextMenuEvent\0"
    "QContextMenuEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nineButtonSelector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   72,    2, 0x0a /* Public */,
       4,    0,   73,    2, 0x0a /* Public */,
       5,    0,   74,    2, 0x0a /* Public */,
       6,    0,   75,    2, 0x0a /* Public */,
       7,    0,   76,    2, 0x0a /* Public */,
       8,    0,   77,    2, 0x0a /* Public */,
       9,    0,   78,    2, 0x0a /* Public */,
      10,    0,   79,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

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
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

void nineButtonSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nineButtonSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nineButtonSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->button0Clicked(); break;
        case 2: _t->button1Clicked(); break;
        case 3: _t->button2Clicked(); break;
        case 4: _t->button3Clicked(); break;
        case 5: _t->button4Clicked(); break;
        case 6: _t->button5Clicked(); break;
        case 7: _t->button6Clicked(); break;
        case 8: _t->button7Clicked(); break;
        case 9: _t->button8Clicked(); break;
        case 10: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (nineButtonSelector::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nineButtonSelector::nineButtonSelection)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject nineButtonSelector::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_nineButtonSelector.data,
    qt_meta_data_nineButtonSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nineButtonSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nineButtonSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nineButtonSelector.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IntModelView"))
        return static_cast< IntModelView*>(this);
    return QWidget::qt_metacast(_clname);
}

int nineButtonSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void nineButtonSelector::nineButtonSelection(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
