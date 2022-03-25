/****************************************************************************
** Meta object code from reading C++ file 'task.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Updater/task.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'task.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Task_t {
    QByteArrayData data[19];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Task_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Task_t qt_meta_stringdata_Task = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Task"
QT_MOC_LITERAL(1, 5, 8), // "finished"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 3), // "run"
QT_MOC_LITERAL(4, 19, 15), // "loadProgramData"
QT_MOC_LITERAL(5, 35, 12), // "loadSettings"
QT_MOC_LITERAL(6, 48, 13), // "startProgramm"
QT_MOC_LITERAL(7, 62, 10), // "onCloseApp"
QT_MOC_LITERAL(8, 73, 8), // "exitCode"
QT_MOC_LITERAL(9, 82, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(10, 103, 6), // "status"
QT_MOC_LITERAL(11, 110, 8), // "checkApp"
QT_MOC_LITERAL(12, 119, 11), // "checkUpdate"
QT_MOC_LITERAL(13, 131, 12), // "isOldVersion"
QT_MOC_LITERAL(14, 144, 6), // "update"
QT_MOC_LITERAL(15, 151, 16), // "copyFilesFromDir"
QT_MOC_LITERAL(16, 168, 4), // "QDir"
QT_MOC_LITERAL(17, 173, 4), // "aDir"
QT_MOC_LITERAL(18, 178, 8) // "aAppPath"

    },
    "Task\0finished\0\0run\0loadProgramData\0"
    "loadSettings\0startProgramm\0onCloseApp\0"
    "exitCode\0QProcess::ExitStatus\0status\0"
    "checkApp\0checkUpdate\0isOldVersion\0"
    "update\0copyFilesFromDir\0QDir\0aDir\0"
    "aAppPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Task[] = {

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
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    2,   74,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x0a /* Public */,
      14,    0,   82,    2, 0x0a /* Public */,
      15,    2,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 16, QMetaType::QString,   17,   18,

       0        // eod
};

void Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Task *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->run(); break;
        case 2: _t->loadProgramData(); break;
        case 3: _t->loadSettings(); break;
        case 4: { int _r = _t->startProgramm();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->onCloseApp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 6: _t->checkApp(); break;
        case 7: _t->checkUpdate(); break;
        case 8: { bool _r = _t->isOldVersion();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->update(); break;
        case 10: { bool _r = _t->copyFilesFromDir((*reinterpret_cast< const QDir(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Task::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Task::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Task.data,
    qt_meta_data_Task,
    qt_static_metacall,
    nullptr,
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
void Task::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
