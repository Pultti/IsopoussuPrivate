#include "derived.h"

int main()
{
    Derived olio;
    olio.testi();
    olio.BaseClass::testi();
    return 0;
}
