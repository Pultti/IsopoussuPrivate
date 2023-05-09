#include "chef.h"

int main() {
    Chef chef("Tony");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef italianChef("Fat-Tony", 250, 100);
    italianChef.makePasta();
    return 0;
}
