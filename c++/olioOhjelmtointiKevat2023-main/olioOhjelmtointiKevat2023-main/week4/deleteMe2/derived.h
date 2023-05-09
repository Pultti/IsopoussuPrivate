#ifndef DERIVED_H
#define DERIVED_H
#include "baseclass.h"

class Derived:public BaseClass
{
public:
    Derived();
    virtual void testi() override;
};

#endif // DERIVED_H
