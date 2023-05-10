#ifndef CHEF_H
#define CHEF_H

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

class ItalianChef : public Chef {
public:
    ItalianChef(std::string name, double flour, double water);
    std::string getName();
    void makePasta();

private:
    double flour;
    double water;
};

#endif
