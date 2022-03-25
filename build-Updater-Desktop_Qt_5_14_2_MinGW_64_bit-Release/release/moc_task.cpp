/****************************************************************************
** Meta object code from reading C++ file 'task.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
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
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Task_t {
    QByteArrayData data[22];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Task_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Task_t qt_meta_stringdata_Task = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Task"
QT_MOC_LITERAL(1, 5, 10), // "s_finished"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 3), // "run"
QT_MOC_LITERAL(4, 21, 15), // "loadProgramData"
QT_MOC_LITERAL(5, 37, 13), // "startProgramm"
QT_MOC_LITERAL(6, 51, 10), // "onCloseApp"
QT_MOC_LITERAL(7, 62, 8), // "exitCode"
QT_MOC_LITERAL(8, 71, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(9, 92, 6), // "status"
QT_MOC_LITERAL(10, 99, 8), // "checkApp"
QT_MOC_LITERAL(11, 108, 11), // "checkUpdate"
QT_MOC_LITERAL(12, 120, 12), // "isOldVersion"
QT_MOC_LITERAL(13, 133, 16), // "isOldTestVersion"
QT_MOC_LITERAL(14, 150, 6), // "update"
QT_MOC_LITERAL(15, 157, 10), // "updateTest"
QT_MOC_LITERAL(16, 168, 16), // "copyFilesFromDir"
QT_MOC_LITERAL(17, 185, 4), // "QDir"
QT_MOC_LITERAL(18, 190, 4), // "aDir"
QT_MOC_LITERAL(19, 195, 8), // "aAppPath"
QT_MOC_LITERAL(20, 204, 18), // "createTrayIconMenu"
QT_MOC_LITERAL(21, 223, 6) // "QMenu*"

    },
    "Task\0s_finished\0\0run\0loadProgramData\0"
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
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    2,   83,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x0a /* Public */,
      11,    0,   89,    2, 0x0a /* Public */,
      12,    0,   90,    2, 0x0a /* Public */,
      13,    0,   91,    2, 0x0a /* Public */,
      14,    0,   92,    2, 0x0a /* Public */,
      15,    0,   93,    2, 0x0a /* Public */,
      16,    2,   94,    2, 0x0a /* Public */,
      20,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 17, QMetaType::QString,   18,   19,
    0x80000000 | 21,

       0        // eod
};

void Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Task *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->s_finished(); break;
        case 1: _t->run(); break;
        case 2: _t->loadProgramData(); break;
        case 3: { int _r = _t->startProgramm();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->onCloseApp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 5: _t->checkApp(); break;
        case 6: _t->checkUpdate(); break;
        case 7: { bool _r = _t->isOldVersion();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isOldTestVersion();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->update(); break;
        case 10: _t->updateTest(); break;
        case 11: { bool _r = _t->copyFilesFromDir((*reinterpret_cast< const QDir(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { QMenu* _r = _t->createTrayIconMenu();
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

// SIGNAL 0
void Task::s_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
