/****************************************************************************
** Meta object code from reading C++ file 'TemplatesMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/TemplatesMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TemplatesMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TemplatesMenu_t {
    QByteArrayData data[9];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TemplatesMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TemplatesMenu_t qt_meta_stringdata_TemplatesMenu = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TemplatesMenu"
QT_MOC_LITERAL(1, 14, 28), // "createNewProjectFromTemplate"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "QAction*"
QT_MOC_LITERAL(4, 53, 7), // "_action"
QT_MOC_LITERAL(5, 61, 17), // "fillTemplatesMenu"
QT_MOC_LITERAL(6, 79, 19), // "addTemplatesFromDir"
QT_MOC_LITERAL(7, 99, 4), // "QDir"
QT_MOC_LITERAL(8, 104, 3) // "dir"

    },
    "TemplatesMenu\0createNewProjectFromTemplate\0"
    "\0QAction*\0_action\0fillTemplatesMenu\0"
    "addTemplatesFromDir\0QDir\0dir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TemplatesMenu[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       5,    0,   32,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void TemplatesMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TemplatesMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createNewProjectFromTemplate((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->fillTemplatesMenu(); break;
        case 2: _t->addTemplatesFromDir((*reinterpret_cast< const QDir(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TemplatesMenu::staticMetaObject = { {
    &QMenu::staticMetaObject,
    qt_meta_stringdata_TemplatesMenu.data,
    qt_meta_data_TemplatesMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TemplatesMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TemplatesMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TemplatesMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int TemplatesMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
