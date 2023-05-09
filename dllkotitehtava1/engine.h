#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include <QDebug>
#include <QRandomGenerator>


class engine : public QObject
{
    Q_OBJECT
public:
    engine(QObject * parent = nullptr);
    ~engine();
     void generate();

signals:
    void sendNumberToInterface(int);

private:
    QRandomGenerator gen;

};

#endif // ENGINE_H
