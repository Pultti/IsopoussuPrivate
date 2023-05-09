#include "kerros.h"

Kerros::Kerros()
{
    pas1 = new Asunto;
    pas2 = new Asunto;
    pas3 = new Asunto;
    pas4 = new Asunto;
    cout<<"kerrosluotu"<<endl;
}

Kerros::~Kerros()
{
    delete pas1;
    pas1 = nullptr;
    delete pas2;
    pas2 = nullptr;
    delete pas3;
    pas3 = nullptr;
    delete pas4;
    pas4 = nullptr;

}
void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
    pas1->maarita(2,100);
    pas2->maarita(2,100);
    pas3->maarita(2,100);
    pas4->maarita(2,100);

}

double Kerros::laskeKulutus(double h)
{
    double  kulutus;
    kulutus = pas1 -> laskeKulutus(h) + pas2->laskeKulutus(h) + pas3->laskeKulutus(h) + pas4->laskeKulutus(h);
    return kulutus;



}
