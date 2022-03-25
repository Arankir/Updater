/****************************************************************************
** Meta object code from reading C++ file 'task.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Updater/task.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'task.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Task_t {
    const uint offsetsAndSize[48];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Task_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Task_t qt_meta_stringdata_Task = {
    {
QT_MOC_LITERAL(0, 4), // "Task"
QT_MOC_LITERAL(5, 10), // "s_finished"
QT_MOC_LITERAL(16, 0), // ""
QT_MOC_LITERAL(17, 16), // "s_updateFinished"
QT_MOC_LITERAL(34, 20), // "s_updateTestFinished"
QT_MOC_LITERAL(55, 3), // "run"
QT_MOC_LITERAL(59, 15), // "loadProgramData"
QT_MOC_LITERAL(75, 13), // "startProgramm"
QT_MOC_LITERAL(89, 10), // "onCloseApp"
QT_MOC_LITERAL(100, 8), // "exitCode"
QT_MOC_LITERAL(109, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(130, 6), // "status"
QT_MOC_LITERAL(137, 8), // "checkApp"
QT_MOC_LITERAL(146, 11), // "checkUpdate"
QT_MOC_LITERAL(158, 12), // "isOldVersion"
QT_MOC_LITERAL(171, 16), // "isOldTestVersion"
QT_MOC_LITERAL(188, 6), // "update"
QT_MOC_LITERAL(195, 10), // "updateTest"
QT_MOC_LITERAL(206, 16), // "copyFilesFromDir"
QT_MOC_LITERAL(223, 4), // "QDir"
QT_MOC_LITERAL(228, 4), // "aDir"
QT_MOC_LITERAL(233, 8), // "aAppPath"
QT_MOC_LITERAL(242, 18), // "createTrayIconMenu"
QT_MOC_LITERAL(261, 6) // "QMenu*"

    },
    "Task\0s_finished\0\0s_updateFinished\0"
    "s_updateTestFinished\0run\0loadProgramData\0"
    "startProgramm\0onCloseApp\0exitCode\0"
    "QProcess::ExitStatus\0status\0checkApp\0"
    "checkUpdate\0isOldVersion\0isOldTestVersion\0"
    "update\0updateTest\0copyFilesFromDir\0"
    "QDir\0aDir\0aAppPath\0createTrayIconMenu\0"
    "QMenu*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Task[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    1 /* Public */,
       3,    0,  105,    2, 0x06,    2 /* Public */,
       4,    0,  106,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,  107,    2, 0x0a,    4 /* Public */,
       6,    0,  108,    2, 0x0a,    5 /* Public */,
       7,    0,  109,    2, 0x0a,    6 /* Public */,
       8,    2,  110,    2, 0x0a,    7 /* Public */,
      12,    0,  115,    2, 0x0a,   10 /* Public */,
      13,    0,  116,    2, 0x0a,   11 /* Public */,
      14,    0,  117,    2, 0x0a,   12 /* Public */,
      15,    0,  118,    2, 0x0a,   13 /* Public */,
      16,    0,  119,    2, 0x0a,   14 /* Public */,
      17,    0,  120,    2, 0x0a,   15 /* Public */,
      18,    2,  121,    2, 0x0a,   16 /* Public */,
      22,    0,  126,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 19, QMetaType::QString,   20,   21,
    0x80000000 | 23,

       0        // eod
};

void Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Task *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->s_finished(); break;
        case 1: _t->s_updateFinished(); break;
        case 2: _t->s_updateTestFinished(); break;
        case 3: _t->run(); break;
        case 4: _t->loadProgramData(); break;
        case 5: { int _r = _t->startProgramm();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->onCloseApp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 7: _t->checkApp(); break;
        case 8: _t->checkUpdate(); break;
        case 9: { bool _r = _t->isOldVersion();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->isOldTestVersion();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->update(); break;
        case 12: _t->updateTest(); break;
        case 13: { bool _r = _t->copyFilesFromDir((*reinterpret_cast< const QDir(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { QMenu* _r = _t->createTrayIconMenu();
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Task::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::s_finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Task::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::s_updateFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Task::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::s_updateTestFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Task::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Task.offsetsAndSize,
    qt_meta_data_Task,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Task_t
, QtPrivate::TypeAndForceComplete<Task, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<const QDir &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<QMenu *, std::false_type>


>,
    nullptr
} };


const QMetaObject *Task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Task::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Task.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Task::s_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Task::s_updateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Task::s_updateTestFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
