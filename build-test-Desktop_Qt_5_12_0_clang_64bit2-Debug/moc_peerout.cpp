/****************************************************************************
** Meta object code from reading C++ file 'peerout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../test/peerout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peerout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Peerout_t {
    QByteArrayData data[9];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Peerout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Peerout_t qt_meta_stringdata_Peerout = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Peerout"
QT_MOC_LITERAL(1, 8, 9), // "ReadyRead"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "DoConnect"
QT_MOC_LITERAL(4, 29, 9), // "Connected"
QT_MOC_LITERAL(5, 39, 12), // "Disconnected"
QT_MOC_LITERAL(6, 52, 18), // "BytesWrittenOfData"
QT_MOC_LITERAL(7, 71, 7), // "qint64&"
QT_MOC_LITERAL(8, 79, 6) // "buffer"

    },
    "Peerout\0ReadyRead\0\0DoConnect\0Connected\0"
    "Disconnected\0BytesWrittenOfData\0qint64&\0"
    "buffer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Peerout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void Peerout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Peerout *_t = static_cast<Peerout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReadyRead(); break;
        case 1: _t->DoConnect(); break;
        case 2: _t->Connected(); break;
        case 3: _t->Disconnected(); break;
        case 4: _t->BytesWrittenOfData((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Peerout::staticMetaObject = { {
    &QTcpSocket::staticMetaObject,
    qt_meta_stringdata_Peerout.data,
    qt_meta_data_Peerout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Peerout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Peerout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Peerout.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int Peerout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
