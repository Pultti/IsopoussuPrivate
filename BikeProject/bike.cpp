#include "bike.h"

Bike::Bike()
{
    cout<<"standard constructor"<<endl;
    tyreSize = 28;
    model = "fatbike";
}
Bike::Bike(int a, string b)
{
    cout<<"special constructor"<<endl;
    tyreSize = a;
    model = b;
}

void Bike::printBike()
{
    cout<<"Bike model = " <<model<<endl;
    cout<<"Bike tyreSize = " <<tyreSize<<endl;
}

int Bike::getTyreSize()
{
    return tyreSize;
}

void Bike::setTyreSize(int a)
{
    tyreSize = a;
}

string Bike::getModel()
{
    return model;
}

void Bike::setModel(string b)
{
    model = b;
}
