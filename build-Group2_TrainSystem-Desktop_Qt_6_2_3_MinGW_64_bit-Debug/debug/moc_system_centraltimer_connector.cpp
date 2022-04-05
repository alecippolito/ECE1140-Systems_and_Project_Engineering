/****************************************************************************
** Meta object code from reading C++ file 'system_centraltimer_connector.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/system_centraltimer_connector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system_centraltimer_connector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_System_CentralTimer_Connector_t {
    const uint offsetsAndSize[18];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_System_CentralTimer_Connector_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_System_CentralTimer_Connector_t qt_meta_stringdata_System_CentralTimer_Connector = {
    {
QT_MOC_LITERAL(0, 29), // "System_CentralTimer_Connector"
QT_MOC_LITERAL(30, 8), // "sendTime"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 14), // "sendTimeUpdate"
QT_MOC_LITERAL(55, 10), // "updateTime"
QT_MOC_LITERAL(66, 24), // "on_OneTimesSpeed_clicked"
QT_MOC_LITERAL(91, 24), // "on_TenTimesSpeed_clicked"
QT_MOC_LITERAL(116, 26), // "on_SixtyTimesSpeed_clicked"
QT_MOC_LITERAL(143, 28) // "on_HundredTimesSpeed_clicked"

    },
    "System_CentralTimer_Connector\0sendTime\0"
    "\0sendTimeUpdate\0updateTime\0"
    "on_OneTimesSpeed_clicked\0"
    "on_TenTimesSpeed_clicked\0"
    "on_SixtyTimesSpeed_clicked\0"
    "on_HundredTimesSpeed_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_System_CentralTimer_Connector[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x06,    1 /* Public */,
       3,    0,   61,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   62,    2, 0x08,    5 /* Private */,
       5,    0,   63,    2, 0x08,    6 /* Private */,
       6,    0,   64,    2, 0x08,    7 /* Private */,
       7,    0,   65,    2, 0x08,    8 /* Private */,
       8,    0,   66,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void System_CentralTimer_Connector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<System_CentralTimer_Connector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sendTimeUpdate(); break;
        case 2: _t->updateTime(); break;
        case 3: _t->on_OneTimesSpeed_clicked(); break;
        case 4: _t->on_TenTimesSpeed_clicked(); break;
        case 5: _t->on_SixtyTimesSpeed_clicked(); break;
        case 6: _t->on_HundredTimesSpeed_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (System_CentralTimer_Connector::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System_CentralTimer_Connector::sendTime)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (System_CentralTimer_Connector::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&System_CentralTimer_Connector::sendTimeUpdate)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject System_CentralTimer_Connector::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_System_CentralTimer_Connector.offsetsAndSize,
    qt_meta_data_System_CentralTimer_Connector,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_System_CentralTimer_Connector_t
, QtPrivate::TypeAndForceComplete<System_CentralTimer_Connector, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *System_CentralTimer_Connector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System_CentralTimer_Connector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_System_CentralTimer_Connector.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int System_CentralTimer_Connector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void System_CentralTimer_Connector::sendTime(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void System_CentralTimer_Connector::sendTimeUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
