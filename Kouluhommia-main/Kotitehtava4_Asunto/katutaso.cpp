#include "katutaso.h"
#include "asunto.h"

Katutaso::Katutaso()
{

    pas1 = new Asunto;
    pas2 = new Asunto;
    cout<<"katutaso luotu"<<endl;
    //cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
}

Katutaso::~Katutaso()
{
    delete pas1;
    pas1 = nullptr;
    delete pas2;
    pas2 = nullptr;
}

void Katutaso::maaritaAsunnot()
{

     cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;

     pas1->maarita(2,100);
     pas2->maarita(2,100);
     cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
     Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double h)
{
    double kulutus;
    kulutus = pas1->laskeKulutus(h) + pas2->laskeKulutus(h) + Kerros::laskeKulutus(h);
    return kulutus;

}
