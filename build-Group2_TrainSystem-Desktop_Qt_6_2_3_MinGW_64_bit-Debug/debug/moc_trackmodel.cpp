/****************************************************************************
** Meta object code from reading C++ file 'trackmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/trackmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackModel_t {
    const uint offsetsAndSize[26];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TrackModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TrackModel_t qt_meta_stringdata_TrackModel = {
    {
QT_MOC_LITERAL(0, 10), // "TrackModel"
QT_MOC_LITERAL(11, 13), // "sendOccupancy"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 19), // "sendOccupancyVector"
QT_MOC_LITERAL(46, 10), // "QList<int>"
QT_MOC_LITERAL(57, 12), // "sendStatuses"
QT_MOC_LITERAL(70, 18), // "sendStatusesVector"
QT_MOC_LITERAL(89, 11), // "QList<bool>"
QT_MOC_LITERAL(101, 15), // "changeOccupancy"
QT_MOC_LITERAL(117, 14), // "changeStatuses"
QT_MOC_LITERAL(132, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(154, 34), // "on_blockNumberSpinBox_valueCh..."
QT_MOC_LITERAL(189, 4) // "arg1"

    },
    "TrackModel\0sendOccupancy\0\0sendOccupancyVector\0"
    "QList<int>\0sendStatuses\0sendStatusesVector\0"
    "QList<bool>\0changeOccupancy\0changeStatuses\0"
    "on_pushButton_clicked\0"
    "on_blockNumberSpinBox_valueChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   62,    2, 0x06,    1 /* Public */,
       3,    1,   69,    2, 0x06,    5 /* Public */,
       5,    3,   72,    2, 0x06,    7 /* Public */,
       6,    1,   79,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    3,   82,    2, 0x08,   13 /* Private */,
       9,    3,   89,    2, 0x08,   17 /* Private */,
      10,    0,   96,    2, 0x08,   21 /* Private */,
      11,    1,   97,    2, 0x08,   22 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void TrackModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendOccupancy((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->sendOccupancyVector((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 2: _t->sendStatuses((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->sendStatusesVector((*reinterpret_cast< QList<bool>(*)>(_a[1]))); break;
        case 4: _t->changeOccupancy((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->changeStatuses((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_blockNumberSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
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

const QMetaObject TrackModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TrackModel.offsetsAndSize,
    qt_meta_data_TrackModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TrackModel_t
, QtPrivate::TypeAndForceComplete<TrackModel, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
