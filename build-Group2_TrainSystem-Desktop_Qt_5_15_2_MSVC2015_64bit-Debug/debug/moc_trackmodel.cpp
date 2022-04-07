/****************************************************************************
** Meta object code from reading C++ file 'trackmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/trackmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackModel_t {
    QByteArrayData data[10];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackModel_t qt_meta_stringdata_TrackModel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TrackModel"
QT_MOC_LITERAL(1, 11, 13), // "sendOccupancy"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "sendOccupancyVector"
QT_MOC_LITERAL(4, 46, 12), // "QVector<int>"
QT_MOC_LITERAL(5, 59, 12), // "sendStatuses"
QT_MOC_LITERAL(6, 72, 18), // "sendStatusesVector"
QT_MOC_LITERAL(7, 91, 13), // "QVector<bool>"
QT_MOC_LITERAL(8, 105, 15), // "changeOccupancy"
QT_MOC_LITERAL(9, 121, 14) // "changeStatuses"

    },
    "TrackModel\0sendOccupancy\0\0sendOccupancyVector\0"
    "QVector<int>\0sendStatuses\0sendStatusesVector\0"
    "QVector<bool>\0changeOccupancy\0"
    "changeStatuses"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       3,    1,   51,    2, 0x06 /* Public */,
       5,    3,   54,    2, 0x06 /* Public */,
       6,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   64,    2, 0x08 /* Private */,
       9,    3,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,    2,    2,    2,

       0        // eod
};

void TrackModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendOccupancy((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->sendOccupancyVector((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 2: _t->sendStatuses((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->sendStatusesVector((*reinterpret_cast< QVector<bool>(*)>(_a[1]))); break;
        case 4: _t->changeOccupancy((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->changeStatuses((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<bool> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrackModel::*)(bool , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackModel::sendOccupancy)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrackModel::*)(QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackModel::sendOccupancyVector)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TrackModel::*)(bool , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackModel::sendStatuses)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TrackModel::*)(QVector<bool> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackModel::sendStatusesVector)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TrackModel.data,
    qt_meta_data_TrackModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackModel.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TrackModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TrackModel::sendOccupancy(bool _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrackModel::sendOccupancyVector(QVector<int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TrackModel::sendStatuses(bool _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TrackModel::sendStatusesVector(QVector<bool> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
