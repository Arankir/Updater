/****************************************************************************
** Meta object code from reading C++ file 'update.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Updater/update.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'update.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Update_t {
    const uint offsetsAndSize[24];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Update_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Update_t qt_meta_stringdata_Update = {
    {
QT_MOC_LITERAL(0, 6), // "Update"
QT_MOC_LITERAL(7, 6), // "s_info"
QT_MOC_LITERAL(14, 0), // ""
QT_MOC_LITERAL(15, 6), // "aTitle"
QT_MOC_LITERAL(22, 8), // "aMessage"
QT_MOC_LITERAL(31, 13), // "s_updateStart"
QT_MOC_LITERAL(45, 11), // "s_updateEnd"
QT_MOC_LITERAL(57, 10), // "s_finished"
QT_MOC_LITERAL(68, 16), // "s_updateFinished"
QT_MOC_LITERAL(85, 20), // "s_updateTestFinished"
QT_MOC_LITERAL(106, 11), // "checkUpdate"
QT_MOC_LITERAL(118, 17) // "forcedCheckUpdate"

    },
    "Update\0s_info\0\0aTitle\0aMessage\0"
    "s_updateStart\0s_updateEnd\0s_finished\0"
    "s_updateFinished\0s_updateTestFinished\0"
    "checkUpdate\0forcedCheckUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Update[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       5,    0,   67,    2, 0x06,    4 /* Public */,
       6,    0,   68,    2, 0x06,    5 /* Public */,
       7,    0,   69,    2, 0x06,    6 /* Public */,
       8,    0,   70,    2, 0x06,    7 /* Public */,
       9,    0,   71,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   72,    2, 0x0a,    9 /* Public */,
      11,    0,   73,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Update::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Update *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->s_info((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->s_updateStart(); break;
        case 2: _t->s_updateEnd(); break;
        case 3: _t->s_finished(); break;
        case 4: _t->s_updateFinished(); break;
        case 5: _t->s_updateTestFinished(); break;
        case 6: _t->checkUpdate(); break;
        case 7: _t->forcedCheckUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Update::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Update::s_info)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Update::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Update::s_updateStart)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Update::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Update::s_updateEnd)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Update::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Update::s_finished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Update::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Update::s_updateFinished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Update::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Update::s_updateTestFinished)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Update::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Update.offsetsAndSize,
    qt_meta_data_Update,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Update_t
, QtPrivate::TypeAndForceComplete<Update, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Update::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Update::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Update.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Update::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Update::s_info(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Update::s_updateStart()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Update::s_updateEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Update::s_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Update::s_updateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Update::s_updateTestFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
