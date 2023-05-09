#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;
#include <string>

class Chef {
public:
    Chef(std::string name);
    virtual ~Chef();
    void makeSalad();
    void makeSoup();

protected:
    std::string name;
};

#endif
