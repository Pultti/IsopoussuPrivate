#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"
using namespace std;

class ItalianChef : public Chef {
public:
    ItalianChef(std::string name, double flour, double water);
    ~ItalianChef()
    {
            std::cout << "ItalianChef destructor!" << std::endl;
    }
    std::string getName();
    void makePasta();

private:
    double flour;
    double water;
};

#endif
