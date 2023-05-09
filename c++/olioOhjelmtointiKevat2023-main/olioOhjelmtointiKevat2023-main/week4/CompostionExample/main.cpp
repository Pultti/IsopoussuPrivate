#include "koostaja.h"

int main()
{
    Koostaja * ptr;
    ptr = new Koostaja;
    ptr->pOsa->printLuku();
    delete ptr;
    ptr = nullptr;
    return 0;
}
