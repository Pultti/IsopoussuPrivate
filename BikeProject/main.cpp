#include <iostream>
using namespace std;
#include "bike.h"


int main()
{

    Bike bike1;
    bike1.printBike();

    Bike bike2(24, "hybrid");
    bike2.printBike();

    return 0;
}
