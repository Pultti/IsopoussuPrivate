#include "koostaja.h"

Koostaja::Koostaja()
{
    cout<<"Koostaja luotu"<<endl;
    pOsa = new Osa;

}

Koostaja::~Koostaja()
{
    delete pOsa;
    pOsa = nullptr;
    cout<<"Koostaja tuhottu"<<endl;
}
