#include "kerrostalo.h"
#include "kerros.h"
#include "katutaso.h"

Kerrostalo::Kerrostalo()
{

    peka = new Katutaso();
    ptoka = new Kerros();
    pkolmas = new Kerros();
    cout<<"Kerrostalo luotu"<<endl;
}

Kerrostalo::~Kerrostalo()
{
    cout<<"Kerrostalo desctructor"<<endl;

    delete peka;
    peka = nullptr;
    delete ptoka;
    ptoka = nullptr;
    delete pkolmas;
    pkolmas = nullptr;

}

void Kerrostalo::maaritaAsunnot()
{
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    peka->maaritaAsunnot();
    ptoka->maaritaAsunnot();
    pkolmas->maaritaAsunnot();
//    neljas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double h)
{

    double kulutus;
    kulutus = peka->laskeKulutus(h) + ptoka->laskeKulutus(h) + pkolmas->laskeKulutus(h); /*+ neljas.laskeKulutus(h);*/
    return kulutus;

}
