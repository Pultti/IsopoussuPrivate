#ifndef DLLKOTITEHTAVA1_H
#define DLLKOTITEHTAVA1_H

#include "dllkotitehtava1_global.h"
#include <QObject>
#include "engine.h"
#include <QDebug>


class DLLKOTITEHTAVA1_EXPORT Dllkotitehtava1 : public QObject
{
    Q_OBJECT

public:
    Dllkotitehtava1(QObject * parent = nullptr);
    ~Dllkotitehtava1();
    void generate();
private slots:
    void receiveNumber(int);

signals:
    void sendNumberToExe(int);

private:
    engine * pengine;
    //engine engine2;
};


#endif // DLLKOTITEHTAVA1_H
