#include "asunto.h"

Asunto::Asunto()
{
        cout<<"asunto luotu"<<endl;
}

void Asunto::maarita(int a, int b)
{
    asukasMaara=a;
    neliot=b;
    cout<<"Asuntoon maaritetty asukkaita="<<a<<" nelioita="<<b<<endl;
}

double Asunto::laskeKulutus(double h)
{
    double kulutus;
    kulutus = asukasMaara*neliot*h;
    //cout<<"asunnon kulutus, kun hinta="<<h<<" on "<<kulutus<<endl;
    return kulutus;
}
