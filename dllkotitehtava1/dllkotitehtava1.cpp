#include "dllkotitehtava1.h"

Dllkotitehtava1::Dllkotitehtava1(QObject * parent) : QObject(parent)
{
    qDebug()<<"dll interface olio tuhottu";
    pengine = new engine(this);
    connect(pengine,SIGNAL(sendNumberToInterface(int)),
            this, SLOT(receiveNumber(int)));
}

Dllkotitehtava1::~Dllkotitehtava1()
{
    qDebug()<<"Dll interface olio tuhottu";
}

void Dllkotitehtava1::generate()
{
    qDebug()<<"Interface sai EXE:lta komennon luoda numero";
    pengine->generate();
}

void Dllkotitehtava1::receiveNumber(int n)
{
    qDebug()<<"Vastaanotin numeron enginelta ja lahetan sen EXE:lle";
    emit sendNumberToExe(n);
}
