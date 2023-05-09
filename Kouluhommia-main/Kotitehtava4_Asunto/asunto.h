#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;

class Asunto
{
public:
    Asunto();
    void maarita(int,int);
    double laskeKulutus(double);
    int asukasMaara;
    int neliot;
};

#endif // ASUNTO_H
