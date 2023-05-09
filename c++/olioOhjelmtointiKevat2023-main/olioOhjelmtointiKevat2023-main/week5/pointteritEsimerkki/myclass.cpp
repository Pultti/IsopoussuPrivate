#include "myclass.h"

myClass::myClass()
{

}

int myClass::getmyVariable()
{
    return myVariable;
}

void myClass::setmyVariable(int v)
{
    myVariable = v;
}

void myClass::printAddresses()
{
    cout<<"This object start address = "<< this << endl;
    ptr1 = &myClass::getmyVariable;
    ptr2 = &myClass::setmyVariable;
    ptr3 = &myClass::printAddresses;

    cout<<"Address of this function = "<<ptr1<<endl;
    cout<<"Address of this function = "<<ptr2<<endl;
    cout<<"Address of this function = "<<ptr3<<endl;
}
