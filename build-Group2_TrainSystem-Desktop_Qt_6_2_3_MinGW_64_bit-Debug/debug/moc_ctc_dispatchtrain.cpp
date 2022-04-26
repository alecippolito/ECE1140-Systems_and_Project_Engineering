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
    const uint offsetsAndSize[40];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CTC_DispatchTrain_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CTC_DispatchTrain_t qt_meta_stringdata_CTC_DispatchTrain = {
    {
QT_MOC_LITERAL(0, 17), // "CTC_DispatchTrain"
QT_MOC_LITERAL(18, 17), // "requestSystemTime"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 17), // "dispatchImmediate"
QT_MOC_LITERAL(55, 11), // "QList<bool>"
QT_MOC_LITERAL(67, 15), // "dispatchStandby"
QT_MOC_LITERAL(83, 16), // "dispatchSchedule"
QT_MOC_LITERAL(100, 14), // "requestCTCMode"
QT_MOC_LITERAL(115, 18), // "receiveStationData"
QT_MOC_LITERAL(134, 13), // "QList<double>"
QT_MOC_LITERAL(148, 10), // "QList<int>"
QT_MOC_LITERAL(159, 18), // "QList<QList<bool>>"
QT_MOC_LITERAL(178, 30), // "on_DepartureCheck_stateChanged"
QT_MOC_LITERAL(209, 4), // "arg1"
QT_MOC_LITERAL(214, 28), // "on_ArrivalCheck_stateChanged"
QT_MOC_LITERAL(243, 17), // "updateTimeDisplay"
QT_MOC_LITERAL(261, 17), // "receiveSystemTime"
QT_MOC_LITERAL(279, 25), // "on_DispatchButton_clicked"
QT_MOC_LITERAL(305, 25), // "on_ScheduleButton_clicked"
QT_MOC_LITERAL(331, 14) // "receiveCTCMode"

    },
    "CTC_DispatchTrain\0requestSystemTime\0"
    "\0dispatchImmediate\0QList<bool>\0"
    "dispatchStandby\0dispatchSchedule\0"
    "requestCTCMode\0receiveStationData\0"
    "QList<double>\0QList<int>\0QList<QList<bool>>\0"
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
       3,    7,   93,    2, 0x06,    2 /* Public */,
       5,    8,  108,    2, 0x06,   10 /* Public */,
       6,    9,  125,    2, 0x06,   19 /* Public */,
       7,    0,  144,    2, 0x06,   29 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    5,  145,    2, 0x08,   30 /* Private */,
      12,    1,  156,    2, 0x08,   36 /* Private */,
      14,    1,  159,    2, 0x08,   38 /* Private */,
      15,    2,  162,    2, 0x08,   40 /* Private */,
      16,    2,  167,    2, 0x08,   43 /* Private */,
      17,    0,  172,    2, 0x08,   46 /* Private */,
      18,    0,  173,    2, 0x08,   47 /* Private */,
      19,    1,  174,    2, 0x08,   48 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, 0x80000000 | 4, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, QMetaType::Int, 0x80000000 | 4, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, 0x80000000 | 4, QMetaType::Int, QMetaType::QTime, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 9, QMetaType::QStringList, 0x80000000 | 10, 0x80000000 | 11,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
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
        case 1: _t->dispatchImmediate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QList<bool>(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QTime(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 2: _t->dispatchStandby((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QList<bool>(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QTime(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 3: _t->dispatchSchedule((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QList<bool>(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QTime(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< QTime(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9]))); break;
        case 4: _t->requestCTCMode(); break;
        case 5: _t->receiveStationData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< QList<QString>(*)>(_a[3])),(*reinterpret_cast< QList<int>(*)>(_a[4])),(*reinterpret_cast< QList<QList<bool>>(*)>(_a[5]))); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QList<bool>> >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
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
            using _t = void (CTC_DispatchTrain::*)(bool , int , double , QVector<bool> , int , QTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchImmediate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)(bool , int , double , int , QVector<bool> , int , QTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchStandby)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)(bool , int , double , QVector<bool> , int , QTime , int , QTime , QString );
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
, QtPrivate::TypeAndForceComplete<CTC_DispatchTrain, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QVector<bool>>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


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
void CTC_DispatchTrain::dispatchImmediate(bool _t1, int _t2, double _t3, QVector<bool> _t4, int _t5, QTime _t6, QString _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CTC_DispatchTrain::dispatchStandby(bool _t1, int _t2, double _t3, int _t4, QVector<bool> _t5, int _t6, QTime _t7, QString _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CTC_DispatchTrain::dispatchSchedule(bool _t1, int _t2, double _t3, QVector<bool> _t4, int _t5, QTime _t6, int _t7, QTime _t8, QString _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CTC_DispatchTrain::requestCTCMode()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
