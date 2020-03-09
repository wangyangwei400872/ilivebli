/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[20];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 23), // "on_pushButton_3_pressed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "set_ansperc"
QT_MOC_LITERAL(4, 44, 3), // "arg"
QT_MOC_LITERAL(5, 48, 11), // "set_timepos"
QT_MOC_LITERAL(6, 60, 14), // "set_timelength"
QT_MOC_LITERAL(7, 75, 12), // "set_filename"
QT_MOC_LITERAL(8, 88, 5), // "char*"
QT_MOC_LITERAL(9, 94, 4), // "argv"
QT_MOC_LITERAL(10, 99, 16), // "set_valueChanged"
QT_MOC_LITERAL(11, 116, 16), // "test_set_ansperc"
QT_MOC_LITERAL(12, 133, 6), // "char**"
QT_MOC_LITERAL(13, 140, 19), // "set_openformjiemian"
QT_MOC_LITERAL(14, 160, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(15, 184, 23), // "on_pushButton_4_pressed"
QT_MOC_LITERAL(16, 208, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(17, 230, 23), // "on_pushButton_5_pressed"
QT_MOC_LITERAL(18, 254, 23), // "on_pushButton_6_pressed"
QT_MOC_LITERAL(19, 278, 23) // "on_pushButton_7_pressed"

    },
    "Widget\0on_pushButton_3_pressed\0\0"
    "set_ansperc\0arg\0set_timepos\0set_timelength\0"
    "set_filename\0char*\0argv\0set_valueChanged\0"
    "test_set_ansperc\0char**\0set_openformjiemian\0"
    "on_pushButton_2_pressed\0on_pushButton_4_pressed\0"
    "on_pushButton_pressed\0on_pushButton_5_pressed\0"
    "on_pushButton_6_pressed\0on_pushButton_7_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    1,   85,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       6,    1,   91,    2, 0x08 /* Private */,
       7,    1,   94,    2, 0x08 /* Private */,
      10,    1,   97,    2, 0x08 /* Private */,
      11,    1,  100,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    0,  108,    2, 0x08 /* Private */,
      19,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_3_pressed(); break;
        case 1: _t->set_ansperc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->set_timepos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->set_timelength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->set_filename((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 5: _t->set_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->test_set_ansperc((*reinterpret_cast< char**(*)>(_a[1]))); break;
        case 7: _t->set_openformjiemian(); break;
        case 8: _t->on_pushButton_2_pressed(); break;
        case 9: _t->on_pushButton_4_pressed(); break;
        case 10: _t->on_pushButton_pressed(); break;
        case 11: _t->on_pushButton_5_pressed(); break;
        case 12: _t->on_pushButton_6_pressed(); break;
        case 13: _t->on_pushButton_7_pressed(); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
