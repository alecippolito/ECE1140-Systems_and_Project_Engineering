/****************************************************************************
** Meta object code from reading C++ file 'ctc_dispatchtrain.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/ctc_dispatchtrain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctc_dispatchtrain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CTC_DispatchTrain_t {
    const uint offsetsAndSize[34];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CTC_DispatchTrain_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CTC_DispatchTrain_t qt_meta_stringdata_CTC_DispatchTrain = {
    {
QT_MOC_LITERAL(0, 17), // "CTC_DispatchTrain"
QT_MOC_LITERAL(18, 17), // "requestSystemTime"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 17), // "dispatchImmediate"
QT_MOC_LITERAL(55, 15), // "dispatchStandby"
QT_MOC_LITERAL(71, 16), // "dispatchSchedule"
QT_MOC_LITERAL(88, 14), // "requestCTCMode"
QT_MOC_LITERAL(103, 18), // "receiveStationData"
QT_MOC_LITERAL(122, 13), // "QList<double>"
QT_MOC_LITERAL(136, 30), // "on_DepartureCheck_stateChanged"
QT_MOC_LITERAL(167, 4), // "arg1"
QT_MOC_LITERAL(172, 28), // "on_ArrivalCheck_stateChanged"
QT_MOC_LITERAL(201, 17), // "updateTimeDisplay"
QT_MOC_LITERAL(219, 17), // "receiveSystemTime"
QT_MOC_LITERAL(237, 25), // "on_DispatchButton_clicked"
QT_MOC_LITERAL(263, 25), // "on_ScheduleButton_clicked"
QT_MOC_LITERAL(289, 14) // "receiveCTCMode"

    },
    "CTC_DispatchTrain\0requestSystemTime\0"
    "\0dispatchImmediate\0dispatchStandby\0"
    "dispatchSchedule\0requestCTCMode\0"
    "receiveStationData\0QList<double>\0"
    "on_DepartureCheck_stateChanged\0arg1\0"
    "on_ArrivalCheck_stateChanged\0"
    "updateTimeDisplay\0receiveSystemTime\0"
    "on_DispatchButton_clicked\0"
    "on_ScheduleButton_clicked\0receiveCTCMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC_DispatchTrain[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    1 /* Public */,
       3,    5,   93,    2, 0x06,    2 /* Public */,
       4,    6,  104,    2, 0x06,    8 /* Public */,
       5,    8,  117,    2, 0x06,   15 /* Public */,
       6,    0,  134,    2, 0x06,   24 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    3,  135,    2, 0x08,   25 /* Private */,
       9,    1,  142,    2, 0x08,   29 /* Private */,
      11,    1,  145,    2, 0x08,   31 /* Private */,
      12,    2,  148,    2, 0x08,   33 /* Private */,
      13,    2,  153,    2, 0x08,   36 /* Private */,
      14,    0,  158,    2, 0x08,   39 /* Private */,
      15,    0,  159,    2, 0x08,   40 /* Private */,
      16,    1,  160,    2, 0x08,   41 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::QTime, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 8, QMetaType::QStringList,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void CTC_DispatchTrain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC_DispatchTrain *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestSystemTime(); break;
        case 1: _t->dispatchImmediate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QTime(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 2: _t->dispatchStandby((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QTime(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 3: _t->dispatchSchedule((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QTime(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QTime(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 4: _t->requestCTCMode(); break;
        case 5: _t->receiveStationData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< QList<QString>(*)>(_a[3]))); break;
        case 6: _t->on_DepartureCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_ArrivalCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateTimeDisplay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->receiveSystemTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->on_DispatchButton_clicked(); break;
        case 11: _t->on_ScheduleButton_clicked(); break;
        case 12: _t->receiveCTCMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CTC_DispatchTrain::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::requestSystemTime)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)(bool , double , int , QTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchImmediate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)(bool , double , int , int , QTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchStandby)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)(bool , double , int , int , QTime , int , QTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchSchedule)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::requestCTCMode)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject CTC_DispatchTrain::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CTC_DispatchTrain.offsetsAndSize,
    qt_meta_data_CTC_DispatchTrain,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CTC_DispatchTrain_t
, QtPrivate::TypeAndForceComplete<CTC_DispatchTrain, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *CTC_DispatchTrain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTC_DispatchTrain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CTC_DispatchTrain.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CTC_DispatchTrain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void CTC_DispatchTrain::requestSystemTime()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CTC_DispatchTrain::dispatchImmediate(bool _t1, double _t2, int _t3, QTime _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CTC_DispatchTrain::dispatchStandby(bool _t1, double _t2, int _t3, int _t4, QTime _t5, QString _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CTC_DispatchTrain::dispatchSchedule(bool _t1, double _t2, int _t3, int _t4, QTime _t5, int _t6, QTime _t7, QString _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CTC_DispatchTrain::requestCTCMode()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
