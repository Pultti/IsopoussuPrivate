#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H
#include "devicebaseclass.h"
#include <iostream>
using namespace std;

class DeviceDisplay:public DeviceBaseClass
{
public:
    DeviceDisplay();
    void setDisplayResolution();
    short getDisplayResolution();

private:
    short displayResolution;
};

#endif // DEVICEDISPLAY_H
