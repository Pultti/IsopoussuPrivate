#include "engine.h"

engine::engine(QObject *parent) : QObject(parent)
{
    qDebug()<<"Dll:N Engine olio luotu";
}

engine::~engine()
{
     qDebug()<<"DLL:n engine tuhottu";
}

void engine::generate()
{
    int luku = gen.generate();
    luku = (gen.generate())%10;
      qDebug()<<"Engine loi numeron = "<< luku;
    emit sendNumberToInterface(luku);
}
