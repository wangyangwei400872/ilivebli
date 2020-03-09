/****************************************************************************
** Meta object code from reading C++ file 'myacceptance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "myacceptance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myacceptance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myacceptance_t {
    QByteArrayData data[9];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myacceptance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myacceptance_t qt_meta_stringdata_myacceptance = {
    {
QT_MOC_LITERAL(0, 0, 12), // "myacceptance"
QT_MOC_LITERAL(1, 13, 7), // "ansperc"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "arg"
QT_MOC_LITERAL(4, 26, 7), // "timepos"
QT_MOC_LITERAL(5, 34, 8), // "filename"
QT_MOC_LITERAL(6, 43, 5), // "char*"
QT_MOC_LITERAL(7, 49, 10), // "timelength"
QT_MOC_LITERAL(8, 60, 7) // "songend"

    },
    "myacceptance\0ansperc\0\0arg\0timepos\0"
    "filename\0char*\0timelength\0songend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myacceptance[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,
       7,    1,   48,    2, 0x06 /* Public */,
       8,    0,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 6,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void myacceptance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myacceptance *_t = static_cast<myacceptance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ansperc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->timepos((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->filename((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 3: _t->timelength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->songend(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (myacceptance::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myacceptance::ansperc)) {
                *result = 0;
            }
        }
        {
            typedef void (myacceptance::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myacceptance::timepos)) {
                *result = 1;
            }
        }
        {
            typedef void (myacceptance::*_t)(char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myacceptance::filename)) {
                *result = 2;
            }
        }
        {
            typedef void (myacceptance::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myacceptance::timelength)) {
                *result = 3;
            }
        }
        {
            typedef void (myacceptance::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myacceptance::songend)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject myacceptance::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_myacceptance.data,
      qt_meta_data_myacceptance,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *myacceptance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myacceptance::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_myacceptance.stringdata0))
        return static_cast<void*>(const_cast< myacceptance*>(this));
    return QThread::qt_metacast(_clname);
}

int myacceptance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void myacceptance::ansperc(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void myacceptance::timepos(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void myacceptance::filename(char * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void myacceptance::timelength(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void myacceptance::songend()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
