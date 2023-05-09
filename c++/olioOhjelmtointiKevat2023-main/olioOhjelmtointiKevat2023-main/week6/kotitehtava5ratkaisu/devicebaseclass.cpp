#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass()
{
    deviceID = 0;
}

void DeviceBaseClass::setDeviceID()
{
    cin >> deviceID;
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
