#include "postilaatikko.h"
#include <iostream>
using namespace std;

Postilaatikko::Postilaatikko()
{
    maara = 0;
    cout<<" Constructor..."<<endl;
}

Postilaatikko::~Postilaatikko()
{
    cout<<"destructor..."<<endl;
}

void Postilaatikko::lisaaPosti(int lkm)
{
    maara = maara + lkm;
}

void Postilaatikko::otaPosti(int lkm)
{
    maara = maara - lkm;
}

void Postilaatikko::asetaNimi(std::string s)
{
    nimi = s;
}

std::string Postilaatikko::palautaNimi()
{
    return nimi;
}
