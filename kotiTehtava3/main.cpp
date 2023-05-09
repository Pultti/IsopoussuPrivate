#include "chef.h"
#include "italianchef.h"
#include <iostream>

int main() {
    Chef chef("Tony");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef ItalianChef("Fat-Tony", 250, 100);
    ItalianChef.makePasta();

return 0;
}
  /*
    ItalianChef italianChef("Fat-Tony", 250, 100);
    italianChef.makePasta();
    std::cout << "The name of the chef is " << italianChef.getName() << std::endl;
    return 0;
}
*/
