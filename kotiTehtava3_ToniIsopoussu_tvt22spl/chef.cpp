#include "chef.h"


Chef::Chef(std::string n) {
    std::cout << "Chef " << n << " is created!" << std::endl;
    name = n;
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

