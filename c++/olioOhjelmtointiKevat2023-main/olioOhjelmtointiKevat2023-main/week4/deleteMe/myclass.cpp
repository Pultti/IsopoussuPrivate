#include "myclass.h"

myClass::myClass(int n)
{
    myNumber = n;
}

void myClass::printMyNumber()
{
   cout<<"myNumber = "<< myNumber<<endl;
   cout<<"This object data address = "<< this << endl;
}
