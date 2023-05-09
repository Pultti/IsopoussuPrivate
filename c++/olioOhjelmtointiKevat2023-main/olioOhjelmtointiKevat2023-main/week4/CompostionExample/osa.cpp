#include "osa.h"

Osa::Osa()
{
    cout<<"Osa luotu"<<endl;
    luku = 1;
}

Osa::~Osa()
{
    cout<<"Osa tuhottu"<<endl;
}

void Osa::printLuku()
{
  cout <<"luku = "<< luku <<endl;
}
