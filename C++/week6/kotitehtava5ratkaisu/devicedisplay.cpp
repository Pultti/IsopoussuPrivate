#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay()
{
    displayResolution = 0;
}

void DeviceDisplay::setDisplayResolution()
{
    cin>>displayResolution;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
