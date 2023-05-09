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
