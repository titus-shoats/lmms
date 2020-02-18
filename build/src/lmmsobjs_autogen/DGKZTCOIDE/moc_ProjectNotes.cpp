/****************************************************************************
** Meta object code from reading C++ file 'ProjectNotes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/ProjectNotes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProjectNotes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProjectNotes_t {
    QByteArrayData data[16];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectNotes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectNotes_t qt_meta_stringdata_ProjectNotes = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ProjectNotes"
QT_MOC_LITERAL(1, 13, 8), // "textBold"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "textUnderline"
QT_MOC_LITERAL(4, 37, 10), // "textItalic"
QT_MOC_LITERAL(5, 48, 10), // "textFamily"
QT_MOC_LITERAL(6, 59, 2), // "_f"
QT_MOC_LITERAL(7, 62, 8), // "textSize"
QT_MOC_LITERAL(8, 71, 2), // "_p"
QT_MOC_LITERAL(9, 74, 9), // "textColor"
QT_MOC_LITERAL(10, 84, 9), // "textAlign"
QT_MOC_LITERAL(11, 94, 8), // "QAction*"
QT_MOC_LITERAL(12, 103, 2), // "_a"
QT_MOC_LITERAL(13, 106, 13), // "formatChanged"
QT_MOC_LITERAL(14, 120, 15), // "QTextCharFormat"
QT_MOC_LITERAL(15, 136, 16) // "alignmentChanged"

    },
    "ProjectNotes\0textBold\0\0textUnderline\0"
    "textItalic\0textFamily\0_f\0textSize\0_p\0"
    "textColor\0textAlign\0QAction*\0_a\0"
    "formatChanged\0QTextCharFormat\0"
    "alignmentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectNotes[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       7,    1,   65,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,
      13,    1,   72,    2, 0x08 /* Private */,
      15,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,    6,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void ProjectNotes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectNotes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textBold(); break;
        case 1: _t->textUnderline(); break;
        case 2: _t->textItalic(); break;
        case 3: _t->textFamily((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->textSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->textColor(); break;
        case 6: _t->textAlign((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->formatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 8: _t->alignmentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProjectNotes::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_ProjectNotes.data,
    qt_meta_data_ProjectNotes,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProjectNotes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectNotes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectNotes.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SerializingObject"))
        return static_cast< SerializingObject*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ProjectNotes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
