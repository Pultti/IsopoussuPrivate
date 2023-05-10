#include "myclass.h"

myClass::myClass(QObject * parent):QObject(parent)
{
    qDebug()<<"myClass constructor";
}

myClass::~myClass()
{
    qDebug()<<"myClass tuhottiin!!!!";
}

void myClass::sendSignal()
{
    emit mySignal("eka signaali");
}
