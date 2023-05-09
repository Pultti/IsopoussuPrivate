#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"
using namespace std;

class ItalianChef : public Chef {
public:

    ItalianChef(std::string, double flour, double water);
    ~ ItalianChef();
    std::string getName();
    void makePasta();

private:
    double flour;
    double water;
};

#endif // ITALIANCHEF_H
