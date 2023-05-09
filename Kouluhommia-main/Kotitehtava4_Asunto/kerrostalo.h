#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "kerros.h"
#include "katutaso.h"

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    void maaritaAsunnot();
    double laskeKulutus(double);
private:
    Katutaso * peka;
    Kerros * ptoka;
    Kerros * pkolmas;
//    Kerros neljas;
};

#endif // KERROSTALO_H
