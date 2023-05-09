#include "chef.h"
#include "italianchef.h"
#include <iostream>

int main() {
    Chef chef("Tony");
    chef.makeSalad();
    chef.makeSoup();

  /*  Chef chef2("Ramsay");
        chef2.makeSalad();
        chef2.makeSoup();  */

    ItalianChef italianChef("Fat-Tony", 250, 100);
    italianChef.makePasta();
    return 0;
}
