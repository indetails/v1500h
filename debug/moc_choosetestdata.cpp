/****************************************************************************
** Meta object code from reading C++ file 'choosetestdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../choosetestdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choosetestdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chooseTestData_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chooseTestData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chooseTestData_t qt_meta_stringdata_chooseTestData = {
    {
QT_MOC_LITERAL(0, 0, 14), // "chooseTestData"
QT_MOC_LITERAL(1, 15, 24), // "on_liTests_doubleClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "index"
QT_MOC_LITERAL(4, 47, 17), // "setupPreviewGraph"
QT_MOC_LITERAL(5, 65, 20), // "setDatasPreviewGraph"
QT_MOC_LITERAL(6, 86, 8), // "TestData"
QT_MOC_LITERAL(7, 95, 8), // "testData"
QT_MOC_LITERAL(8, 104, 22) // "on_bChooseTest_clicked"

    },
    "chooseTestData\0on_liTests_doubleClicked\0"
    "\0index\0setupPreviewGraph\0setDatasPreviewGraph\0"
    "TestData\0testData\0on_bChooseTest_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chooseTestData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void chooseTestData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        chooseTestData *_t = static_cast<chooseTestData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_liTests_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->setupPreviewGraph(); break;
        case 2: _t->setDatasPreviewGraph((*reinterpret_cast< TestData(*)>(_a[1]))); break;
        case 3: _t->on_bChooseTest_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject chooseTestData::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_chooseTestData.data,
      qt_meta_data_chooseTestData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *chooseTestData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chooseTestData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_chooseTestData.stringdata0))
        return static_cast<void*>(const_cast< chooseTestData*>(this));
    return QDialog::qt_metacast(_clname);
}

int chooseTestData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
