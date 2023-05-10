#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"
#include <iostream>
using namespace std;

class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void showMenu();
    void setMouse();
    void setTouchPad();
    void setDisplay();
    void showInfo();
private:
    DeviceMouse * pDeviceMouse;
    DeviceDisplay * pDeviceDisplay;
    DeviceTouchPad * pDeviceTouchPad;
};

#endif // MYDEVICEUI_H
#include "devicemouse.h"
