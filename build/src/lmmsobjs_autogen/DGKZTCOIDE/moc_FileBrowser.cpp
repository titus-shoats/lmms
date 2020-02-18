/****************************************************************************
** Meta object code from reading C++ file 'FileBrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/FileBrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileBrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileBrowser_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileBrowser_t qt_meta_stringdata_FileBrowser = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileBrowser"
QT_MOC_LITERAL(1, 12, 10), // "reloadTree"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "expandItems"
QT_MOC_LITERAL(4, 36, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 53, 4), // "item"
QT_MOC_LITERAL(6, 58, 14), // "QList<QString>"
QT_MOC_LITERAL(7, 73, 12), // "expandedDirs"
QT_MOC_LITERAL(8, 86, 11), // "filterItems"
QT_MOC_LITERAL(9, 98, 6), // "filter"
QT_MOC_LITERAL(10, 105, 17) // "giveFocusToFilter"

    },
    "FileBrowser\0reloadTree\0\0expandItems\0"
    "QTreeWidgetItem*\0item\0QList<QString>\0"
    "expandedDirs\0filterItems\0filter\0"
    "giveFocusToFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileBrowser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    2,   50,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x28 /* Private | MethodCloned */,
       3,    0,   58,    2, 0x28 /* Private | MethodCloned */,
       8,    2,   59,    2, 0x08 /* Private */,
       8,    1,   64,    2, 0x28 /* Private | MethodCloned */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void FileBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reloadTree(); break;
        case 1: _t->expandItems((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2]))); break;
        case 2: _t->expandItems((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->expandItems(); break;
        case 4: { bool _r = _t->filterItems((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->filterItems((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->giveFocusToFilter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileBrowser::staticMetaObject = { {
    &SideBarWidget::staticMetaObject,
    qt_meta_stringdata_FileBrowser.data,
    qt_meta_data_FileBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileBrowser.stringdata0))
        return static_cast<void*>(this);
    return SideBarWidget::qt_metacast(_clname);
}

int FileBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SideBarWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_FileBrowserTreeWidget_t {
    QByteArrayData data[10];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileBrowserTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileBrowserTreeWidget_t qt_meta_stringdata_FileBrowserTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "FileBrowserTreeWidget"
QT_MOC_LITERAL(1, 22, 16), // "activateListItem"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 57, 4), // "item"
QT_MOC_LITERAL(5, 62, 6), // "column"
QT_MOC_LITERAL(6, 69, 27), // "openInNewInstrumentTrackBBE"
QT_MOC_LITERAL(7, 97, 26), // "openInNewInstrumentTrackSE"
QT_MOC_LITERAL(8, 124, 27), // "sendToActiveInstrumentTrack"
QT_MOC_LITERAL(9, 152, 15) // "updateDirectory"

    },
    "FileBrowserTreeWidget\0activateListItem\0"
    "\0QTreeWidgetItem*\0item\0column\0"
    "openInNewInstrumentTrackBBE\0"
    "openInNewInstrumentTrackSE\0"
    "sendToActiveInstrumentTrack\0updateDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileBrowserTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,
       8,    0,   46,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void FileBrowserTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileBrowserTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateListItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->openInNewInstrumentTrackBBE(); break;
        case 2: _t->openInNewInstrumentTrackSE(); break;
        case 3: _t->sendToActiveInstrumentTrack(); break;
        case 4: _t->updateDirectory((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileBrowserTreeWidget::staticMetaObject = { {
    &QTreeWidget::staticMetaObject,
    qt_meta_stringdata_FileBrowserTreeWidget.data,
    qt_meta_data_FileBrowserTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileBrowserTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileBrowserTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileBrowserTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int FileBrowserTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
