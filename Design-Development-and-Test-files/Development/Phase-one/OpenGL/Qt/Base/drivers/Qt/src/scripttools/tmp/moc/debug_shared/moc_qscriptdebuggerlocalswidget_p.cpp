/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebuggerlocalswidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../debugging/qscriptdebuggerlocalswidget_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebuggerlocalswidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QScriptDebuggerLocalsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,
      59,   28,   28,   28, 0x08,
      88,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QScriptDebuggerLocalsWidget[] = {
    "QScriptDebuggerLocalsWidget\0\0"
    "_q_onCompletionTaskFinished()\0"
    "_q_insertCompletion(QString)\0"
    "_q_expandIndex(QModelIndex)\0"
};

void QScriptDebuggerLocalsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QScriptDebuggerLocalsWidget *_t = static_cast<QScriptDebuggerLocalsWidget *>(_o);
        switch (_id) {
        case 0: _t->d_func()->_q_onCompletionTaskFinished(); break;
        case 1: _t->d_func()->_q_insertCompletion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_expandIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QScriptDebuggerLocalsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QScriptDebuggerLocalsWidget::staticMetaObject = {
    { &QScriptDebuggerLocalsWidgetInterface::staticMetaObject, qt_meta_stringdata_QScriptDebuggerLocalsWidget,
      qt_meta_data_QScriptDebuggerLocalsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QScriptDebuggerLocalsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QScriptDebuggerLocalsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QScriptDebuggerLocalsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebuggerLocalsWidget))
        return static_cast<void*>(const_cast< QScriptDebuggerLocalsWidget*>(this));
    return QScriptDebuggerLocalsWidgetInterface::qt_metacast(_clname);
}

int QScriptDebuggerLocalsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScriptDebuggerLocalsWidgetInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
