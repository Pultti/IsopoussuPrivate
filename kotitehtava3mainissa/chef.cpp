#include "chef.h"
#include <iostream>

Chef::Chef(std::string name) {
    std::cout << "Chef " << name << " is created!" << std::endl;
    this->name = name;
}

Chef::~Chef() {
    std::cout << "Chef " << name << " is destroyed!" << std::endl;
}

void Chef::makeSalad() {
    std::cout << name << " is making salad!" << std::endl;
}

void Chef::makeSoup() {
    std::cout << name << " is making soup!" << std::endl;
}

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
