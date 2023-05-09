#ifndef BIKE_H
#define BIKE_H
#include <iostream>
using namespace std;

class Bike
{
public:
    Bike();
    Bike(int, string);
    void printBike(void);

    private:
    int getTyreSize();
    void setTyreSize(int);
    string getModel();
    void setModel(string);

    int tyreSize;
    string model;

};

#endif
