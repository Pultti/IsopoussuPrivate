#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>
using namespace std;


class myClass
{
public:
    myClass();
    int myVariable =10;
    int (myClass::*ptr1)();
    void (myClass::*ptr2)(int);
    void (myClass::*ptr3)();
    int getmyVariable();
    void setmyVariable(int);
    void printAddresses();

};

#endif // MYCLASS_H
