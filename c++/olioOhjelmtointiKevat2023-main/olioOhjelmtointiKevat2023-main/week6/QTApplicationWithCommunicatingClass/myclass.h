#ifndef MYCLASS_H
#define MYCLASS_H

#include <QDebug>
#include <QObject>
/*
 * Näin luokasta tehdään viestintään kykenevä:
 * 1. Incluce QObject
 * 2. peri QObject
 * 3. lisää Q_OBJECT makro luokan alkuun
 * 4. Lisää luokkaan signals: ja public slots: osiot
 *
 * Näin luokka saadaan tuhoutumaan automaattisesti:
 * 1. Konstruktorin pitää ottaa QObject * parent pointteri
 * 2. Konstruktorin toteutuksessa parent pointteri välitetään
 *    QObjectille.
 */

class myClass : public QObject
{
    Q_OBJECT
public:
    myClass(QObject * parent = nullptr);
    ~myClass();
    void sendSignal();

signals:
    void mySignal(QString);


public slots:

};

#endif // MYCLASS_H
