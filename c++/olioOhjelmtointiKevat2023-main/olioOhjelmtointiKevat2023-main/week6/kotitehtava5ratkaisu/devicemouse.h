#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H
#include "devicebaseclass.h"
#include <iostream>
using namespace std;
class DeviceMouse:public DeviceBaseClass
{
public:
    DeviceMouse();
    void setPrimaryButton();
    short getPrimaryButton();
private:
    short primaryButton;

};

#endif // DEVICEMOUSE_H
