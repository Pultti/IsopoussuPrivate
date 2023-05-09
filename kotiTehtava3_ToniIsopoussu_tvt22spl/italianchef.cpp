#include "italianchef.h"


ItalianChef::ItalianChef(std::string n, double f, double w):Chef(n)
{
    flour=f;
    water=w;
}


std::string ItalianChef::getName() {
    return name;
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef " << name << " is destroyeeeeeeeed!" << std::endl;
}

void ItalianChef::makePasta()
{
    std::cout << "Chef" << getName() << "Making pasta with special recipe." <<std::endl;
    std::cout << "Chef" << getName() << "Uses flour" << flour << "g:"<<std::endl;
    std::cout << "Chef" << getName() << "Uses water" << water << "ml:"<<endl;

}
