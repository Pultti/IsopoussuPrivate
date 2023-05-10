#include <iostream>

using namespace std;

#include "myclass.h"

myClass globalObject;

int main()
{
    cout<<"Global object first"<< endl;
    globalObject.printAddresses();
    cout<<endl;

    myClass stackObject;

    cout<<"Stack object second"<< endl;
    stackObject.printAddresses();
    cout<<endl;


    myClass * pmyClass = new myClass;
    cout<<"heap object third"<< endl;
    pmyClass->printAddresses();
    cout<<endl;



    delete pmyClass;
    pmyClass = nullptr;
    return 0;
}
