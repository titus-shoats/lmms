/****************************************************************************
** Meta object code from reading C++ file 'Xpressive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/Xpressive/Xpressive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Xpressive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Xpressive_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Xpressive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Xpressive_t qt_meta_stringdata_Xpressive = {
    {
QT_MOC_LITERAL(0, 0, 9) // "Xpressive"

    },
    "Xpressive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Xpressive[] = {

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

void Xpressive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Xpressive::staticMetaObject = { {
    &Instrument::staticMetaObject,
    qt_meta_stringdata_Xpressive.data,
    qt_meta_data_Xpressive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Xpressive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Xpressive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Xpressive.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int Xpressive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Instrument::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_XpressiveView_t {
    QByteArrayData data[15];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XpressiveView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XpressiveView_t qt_meta_stringdata_XpressiveView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "XpressiveView"
QT_MOC_LITERAL(1, 14, 12), // "updateLayout"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "sinWaveClicked"
QT_MOC_LITERAL(4, 43, 19), // "triangleWaveClicked"
QT_MOC_LITERAL(5, 63, 14), // "sqrWaveClicked"
QT_MOC_LITERAL(6, 78, 14), // "sawWaveClicked"
QT_MOC_LITERAL(7, 93, 16), // "noiseWaveClicked"
QT_MOC_LITERAL(8, 110, 18), // "moogSawWaveClicked"
QT_MOC_LITERAL(9, 129, 14), // "expWaveClicked"
QT_MOC_LITERAL(10, 144, 14), // "usrWaveClicked"
QT_MOC_LITERAL(11, 159, 11), // "helpClicked"
QT_MOC_LITERAL(12, 171, 17), // "expressionChanged"
QT_MOC_LITERAL(13, 189, 13), // "smoothChanged"
QT_MOC_LITERAL(14, 203, 10) // "graphDrawn"

    },
    "XpressiveView\0updateLayout\0\0sinWaveClicked\0"
    "triangleWaveClicked\0sqrWaveClicked\0"
    "sawWaveClicked\0noiseWaveClicked\0"
    "moogSawWaveClicked\0expWaveClicked\0"
    "usrWaveClicked\0helpClicked\0expressionChanged\0"
    "smoothChanged\0graphDrawn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XpressiveView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x09 /* Protected */,
       3,    0,   80,    2, 0x09 /* Protected */,
       4,    0,   81,    2, 0x09 /* Protected */,
       5,    0,   82,    2, 0x09 /* Protected */,
       6,    0,   83,    2, 0x09 /* Protected */,
       7,    0,   84,    2, 0x09 /* Protected */,
       8,    0,   85,    2, 0x09 /* Protected */,
       9,    0,   86,    2, 0x09 /* Protected */,
      10,    0,   87,    2, 0x09 /* Protected */,
      11,    0,   88,    2, 0x09 /* Protected */,
      12,    0,   89,    2, 0x09 /* Protected */,
      13,    0,   90,    2, 0x09 /* Protected */,
      14,    0,   91,    2, 0x09 /* Protected */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void XpressiveView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XpressiveView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLayout(); break;
        case 1: _t->sinWaveClicked(); break;
        case 2: _t->triangleWaveClicked(); break;
        case 3: _t->sqrWaveClicked(); break;
        case 4: _t->sawWaveClicked(); break;
        case 5: _t->noiseWaveClicked(); break;
        case 6: _t->moogSawWaveClicked(); break;
        case 7: _t->expWaveClicked(); break;
        case 8: _t->usrWaveClicked(); break;
        case 9: _t->helpClicked(); break;
        case 10: _t->expressionChanged(); break;
        case 11: _t->smoothChanged(); break;
        case 12: _t->graphDrawn(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject XpressiveView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_XpressiveView.data,
    qt_meta_data_XpressiveView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XpressiveView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XpressiveView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XpressiveView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int XpressiveView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentViewFixedSize::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_XpressiveHelpView_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XpressiveHelpView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XpressiveHelpView_t qt_meta_stringdata_XpressiveHelpView = {
    {
QT_MOC_LITERAL(0, 0, 17) // "XpressiveHelpView"

    },
    "XpressiveHelpView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XpressiveHelpView[] = {

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

void XpressiveHelpView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject XpressiveHelpView::staticMetaObject = { {
    &QTextEdit::staticMetaObject,
    qt_meta_stringdata_XpressiveHelpView.data,
    qt_meta_data_XpressiveHelpView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XpressiveHelpView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XpressiveHelpView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XpressiveHelpView.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int XpressiveHelpView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
