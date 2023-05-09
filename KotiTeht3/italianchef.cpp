#include "italianchef.h"

ItalianChef::ItalianChef(std::string name, double flour, double water) : Chef(name) {
    this->flour = flour;
    this->water = water;
}

std::string ItalianChef::getName() {
    return name;
}

void ItalianChef::makePasta() {
    std::cout << name << " is making pasta with special recipe"<<std::endl;
    std::cout << name << " uses " << flour << "g of flour " <<std::endl;
    std::cout << name << " uses " << water << "ml of water " <<std::endl;
}

