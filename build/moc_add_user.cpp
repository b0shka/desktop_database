/****************************************************************************
** Meta object code from reading C++ file 'add_user.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/add_user/add_user.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Add_user_t {
    QByteArrayData data[22];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Add_user_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Add_user_t qt_meta_stringdata_Add_user = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Add_user"
QT_MOC_LITERAL(1, 9, 16), // "on_close_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "on_hide_clicked"
QT_MOC_LITERAL(4, 43, 24), // "on_add_save_user_clicked"
QT_MOC_LITERAL(5, 68, 18), // "on_add_doc_clicked"
QT_MOC_LITERAL(6, 87, 20), // "on_add_photo_clicked"
QT_MOC_LITERAL(7, 108, 25), // "on_delete_photo_1_clicked"
QT_MOC_LITERAL(8, 134, 25), // "on_delete_photo_2_clicked"
QT_MOC_LITERAL(9, 160, 25), // "on_delete_photo_3_clicked"
QT_MOC_LITERAL(10, 186, 25), // "on_delete_photo_4_clicked"
QT_MOC_LITERAL(11, 212, 22), // "on_delete_user_clicked"
QT_MOC_LITERAL(12, 235, 13), // "keyPressEvent"
QT_MOC_LITERAL(13, 249, 10), // "QKeyEvent*"
QT_MOC_LITERAL(14, 260, 5), // "event"
QT_MOC_LITERAL(15, 266, 15), // "mousePressEvent"
QT_MOC_LITERAL(16, 282, 12), // "QMouseEvent*"
QT_MOC_LITERAL(17, 295, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(18, 310, 13), // "add_info_user"
QT_MOC_LITERAL(19, 324, 14), // "QList<QString>"
QT_MOC_LITERAL(20, 339, 9), // "data_user"
QT_MOC_LITERAL(21, 349, 11) // "bytes_photo"

    },
    "Add_user\0on_close_clicked\0\0on_hide_clicked\0"
    "on_add_save_user_clicked\0on_add_doc_clicked\0"
    "on_add_photo_clicked\0on_delete_photo_1_clicked\0"
    "on_delete_photo_2_clicked\0"
    "on_delete_photo_3_clicked\0"
    "on_delete_photo_4_clicked\0"
    "on_delete_user_clicked\0keyPressEvent\0"
    "QKeyEvent*\0event\0mousePressEvent\0"
    "QMouseEvent*\0mouseMoveEvent\0add_info_user\0"
    "QList<QString>\0data_user\0bytes_photo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Add_user[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      15,    1,   97,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      18,    2,  103,    2, 0x08 /* Private */,

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
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   14,
    QMetaType::Void, 0x80000000 | 16,   14,
    QMetaType::Void, 0x80000000 | 19, QMetaType::QByteArrayList,   20,   21,

       0        // eod
};

void Add_user::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Add_user *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_clicked(); break;
        case 1: _t->on_hide_clicked(); break;
        case 2: _t->on_add_save_user_clicked(); break;
        case 3: _t->on_add_doc_clicked(); break;
        case 4: _t->on_add_photo_clicked(); break;
        case 5: _t->on_delete_photo_1_clicked(); break;
        case 6: _t->on_delete_photo_2_clicked(); break;
        case 7: _t->on_delete_photo_3_clicked(); break;
        case 8: _t->on_delete_photo_4_clicked(); break;
        case 9: _t->on_delete_user_clicked(); break;
        case 10: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 11: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 13: _t->add_info_user((*reinterpret_cast< const QList<QString>(*)>(_a[1])),(*reinterpret_cast< const QList<QByteArray>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Add_user::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Add_user.data,
    qt_meta_data_Add_user,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Add_user::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Add_user::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Add_user.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Add_user::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
