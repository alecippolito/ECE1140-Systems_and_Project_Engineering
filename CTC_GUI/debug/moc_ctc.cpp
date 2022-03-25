/****************************************************************************
** Meta object code from reading C++ file 'ctc.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ctc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CTC_t {
    const uint offsetsAndSize[42];
    char stringdata0[434];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CTC_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CTC_t qt_meta_stringdata_CTC = {
    {
QT_MOC_LITERAL(0, 3), // "CTC"
QT_MOC_LITERAL(4, 13), // "sendTrackData"
QT_MOC_LITERAL(18, 0), // ""
QT_MOC_LITERAL(19, 13), // "QList<double>"
QT_MOC_LITERAL(33, 10), // "QList<int>"
QT_MOC_LITERAL(44, 17), // "sendTrackDataEdit"
QT_MOC_LITERAL(62, 17), // "QList<TrackBlock>"
QT_MOC_LITERAL(80, 9), // "sendTrain"
QT_MOC_LITERAL(90, 5), // "Train"
QT_MOC_LITERAL(96, 33), // "on_actionDispatch_Train_trigg..."
QT_MOC_LITERAL(130, 19), // "updateTrainStatuses"
QT_MOC_LITERAL(150, 38), // "on_actionView_Train_Statuses_..."
QT_MOC_LITERAL(189, 24), // "on_actionClear_triggered"
QT_MOC_LITERAL(214, 25), // "on_previousButton_clicked"
QT_MOC_LITERAL(240, 21), // "on_nextButton_clicked"
QT_MOC_LITERAL(262, 35), // "on_actionOpen_Close_Track_tri..."
QT_MOC_LITERAL(298, 19), // "updateTrackStatuses"
QT_MOC_LITERAL(318, 15), // "dispatchRedLine"
QT_MOC_LITERAL(334, 17), // "dispatchGreenLine"
QT_MOC_LITERAL(352, 41), // "on_actionView_Green_Line_Stat..."
QT_MOC_LITERAL(394, 39) // "on_actionView_Red_Line_Status..."

    },
    "CTC\0sendTrackData\0\0QList<double>\0"
    "QList<int>\0sendTrackDataEdit\0"
    "QList<TrackBlock>\0sendTrain\0Train\0"
    "on_actionDispatch_Train_triggered\0"
    "updateTrainStatuses\0"
    "on_actionView_Train_Statuses_triggered\0"
    "on_actionClear_triggered\0"
    "on_previousButton_clicked\0"
    "on_nextButton_clicked\0"
    "on_actionOpen_Close_Track_triggered\0"
    "updateTrackStatuses\0dispatchRedLine\0"
    "dispatchGreenLine\0"
    "on_actionView_Green_Line_Status_triggered\0"
    "on_actionView_Red_Line_Status_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC[] = {

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
       1,    3,  104,    2, 0x06,    1 /* Public */,
       5,    1,  111,    2, 0x06,    5 /* Public */,
       7,    1,  114,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,  117,    2, 0x08,    9 /* Private */,
      10,    0,  118,    2, 0x08,   10 /* Private */,
      11,    0,  119,    2, 0x08,   11 /* Private */,
      12,    0,  120,    2, 0x08,   12 /* Private */,
      13,    0,  121,    2, 0x08,   13 /* Private */,
      14,    0,  122,    2, 0x08,   14 /* Private */,
      15,    0,  123,    2, 0x08,   15 /* Private */,
      16,    0,  124,    2, 0x08,   16 /* Private */,
      17,    0,  125,    2, 0x08,   17 /* Private */,
      18,    0,  126,    2, 0x08,   18 /* Private */,
      19,    0,  127,    2, 0x08,   19 /* Private */,
      20,    0,  128,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList, 0x80000000 | 4,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CTC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendTrackData((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])),(*reinterpret_cast< QList<int>(*)>(_a[3]))); break;
        case 1: _t->sendTrackDataEdit((*reinterpret_cast< QList<TrackBlock>(*)>(_a[1]))); break;
        case 2: _t->sendTrain((*reinterpret_cast< Train(*)>(_a[1]))); break;
        case 3: _t->on_actionDispatch_Train_triggered(); break;
        case 4: _t->updateTrainStatuses(); break;
        case 5: _t->on_actionView_Train_Statuses_triggered(); break;
        case 6: _t->on_actionClear_triggered(); break;
        case 7: _t->on_previousButton_clicked(); break;
        case 8: _t->on_nextButton_clicked(); break;
        case 9: _t->on_actionOpen_Close_Track_triggered(); break;
        case 10: _t->updateTrackStatuses(); break;
        case 11: _t->dispatchRedLine(); break;
        case 12: _t->dispatchGreenLine(); break;
        case 13: _t->on_actionView_Green_Line_Status_triggered(); break;
        case 14: _t->on_actionView_Red_Line_Status_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CTC::*)(QVector<double> , QVector<QString> , QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC::sendTrackData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CTC::*)(QVector<TrackBlock> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC::sendTrackDataEdit)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CTC::*)(Train );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC::sendTrain)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject CTC::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CTC.offsetsAndSize,
    qt_meta_data_CTC,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CTC_t
, QtPrivate::TypeAndForceComplete<CTC, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<TrackBlock>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Train, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CTC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTC::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CTC.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CTC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void CTC::sendTrackData(QVector<double> _t1, QVector<QString> _t2, QVector<int> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CTC::sendTrackDataEdit(QVector<TrackBlock> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CTC::sendTrain(Train _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
