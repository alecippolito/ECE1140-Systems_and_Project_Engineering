/****************************************************************************
** Meta object code from reading C++ file 'ctc_changeswitches.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/ctc_changeswitches.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctc_changeswitches.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CTC_ChangeSwitches_t {
    const uint offsetsAndSize[18];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CTC_ChangeSwitches_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CTC_ChangeSwitches_t qt_meta_stringdata_CTC_ChangeSwitches = {
    {
QT_MOC_LITERAL(0, 18), // "CTC_ChangeSwitches"
QT_MOC_LITERAL(19, 14), // "requestCTCMode"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 14), // "sendSwitchData"
QT_MOC_LITERAL(50, 14), // "receiveCTCMode"
QT_MOC_LITERAL(65, 20), // "on_LineBox_activated"
QT_MOC_LITERAL(86, 5), // "index"
QT_MOC_LITERAL(92, 30), // "on_SwitchLocationBox_activated"
QT_MOC_LITERAL(123, 28) // "on_SwitchStateButton_clicked"

    },
    "CTC_ChangeSwitches\0requestCTCMode\0\0"
    "sendSwitchData\0receiveCTCMode\0"
    "on_LineBox_activated\0index\0"
    "on_SwitchLocationBox_activated\0"
    "on_SwitchStateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC_ChangeSwitches[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    3,   51,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   58,    2, 0x08,    6 /* Private */,
       5,    1,   61,    2, 0x08,    8 /* Private */,
       7,    1,   64,    2, 0x08,   10 /* Private */,
       8,    0,   67,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void CTC_ChangeSwitches::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC_ChangeSwitches *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestCTCMode(); break;
        case 1: _t->sendSwitchData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->receiveCTCMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_LineBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_SwitchLocationBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_SwitchStateButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CTC_ChangeSwitches::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_ChangeSwitches::requestCTCMode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CTC_ChangeSwitches::*)(bool , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_ChangeSwitches::sendSwitchData)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CTC_ChangeSwitches::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CTC_ChangeSwitches.offsetsAndSize,
    qt_meta_data_CTC_ChangeSwitches,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CTC_ChangeSwitches_t
, QtPrivate::TypeAndForceComplete<CTC_ChangeSwitches, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CTC_ChangeSwitches::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTC_ChangeSwitches::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CTC_ChangeSwitches.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CTC_ChangeSwitches::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CTC_ChangeSwitches::requestCTCMode()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CTC_ChangeSwitches::sendSwitchData(bool _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
