/****************************************************************************
** Meta object code from reading C++ file 'ctc_dispatchtrain.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Group2_TrainSystem/ctc_dispatchtrain.h"
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
    const uint offsetsAndSize[28];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CTC_DispatchTrain_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CTC_DispatchTrain_t qt_meta_stringdata_CTC_DispatchTrain = {
    {
QT_MOC_LITERAL(0, 17), // "CTC_DispatchTrain"
QT_MOC_LITERAL(18, 17), // "requestSystemTime"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 17), // "dispatchImmediate"
QT_MOC_LITERAL(55, 16), // "dispatchSchedule"
QT_MOC_LITERAL(72, 18), // "receiveStationData"
QT_MOC_LITERAL(91, 13), // "QList<double>"
QT_MOC_LITERAL(105, 10), // "QList<int>"
QT_MOC_LITERAL(116, 30), // "on_DepartureCheck_stateChanged"
QT_MOC_LITERAL(147, 4), // "arg1"
QT_MOC_LITERAL(152, 28), // "on_ArrivalCheck_stateChanged"
QT_MOC_LITERAL(181, 17), // "updateTimeDisplay"
QT_MOC_LITERAL(199, 17), // "receiveSystemTime"
QT_MOC_LITERAL(217, 25) // "on_DispatchButton_clicked"

    },
    "CTC_DispatchTrain\0requestSystemTime\0"
    "\0dispatchImmediate\0dispatchSchedule\0"
    "receiveStationData\0QList<double>\0"
    "QList<int>\0on_DepartureCheck_stateChanged\0"
    "arg1\0on_ArrivalCheck_stateChanged\0"
    "updateTimeDisplay\0receiveSystemTime\0"
    "on_DispatchButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC_DispatchTrain[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    3,   69,    2, 0x06,    2 /* Public */,
       4,    4,   76,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    4,   85,    2, 0x08,   11 /* Private */,
       8,    1,   94,    2, 0x08,   16 /* Private */,
      10,    1,   97,    2, 0x08,   18 /* Private */,
      11,    2,  100,    2, 0x08,   20 /* Private */,
      12,    2,  105,    2, 0x08,   23 /* Private */,
      13,    0,  110,    2, 0x08,   26 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, QMetaType::Int,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 6, QMetaType::QStringList, 0x80000000 | 7,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,

       0        // eod
};

void CTC_DispatchTrain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC_DispatchTrain *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestSystemTime(); break;
        case 1: _t->dispatchImmediate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->dispatchSchedule((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->receiveStationData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< QList<QString>(*)>(_a[3])),(*reinterpret_cast< QList<int>(*)>(_a[4]))); break;
        case 4: _t->on_DepartureCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_ArrivalCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateTimeDisplay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->receiveSystemTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_DispatchButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
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
            using _t = void (CTC_DispatchTrain::*)(bool , int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchImmediate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)(bool , int , double , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchSchedule)) {
                *result = 2;
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
, QtPrivate::TypeAndForceComplete<CTC_DispatchTrain, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CTC_DispatchTrain::requestSystemTime()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CTC_DispatchTrain::dispatchImmediate(bool _t1, int _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CTC_DispatchTrain::dispatchSchedule(bool _t1, int _t2, double _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
