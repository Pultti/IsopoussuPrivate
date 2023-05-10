#include <iostream>
using namespace std;
#include "postilaatikko.h"


int main()
{

    Postilaatikko laatikko;

    laatikko.asetaNimi("Karin laatikko");
    cout<<"Laatikon nimi = " << laatikko.palautaNimi() << endl;

    return 0;
}
