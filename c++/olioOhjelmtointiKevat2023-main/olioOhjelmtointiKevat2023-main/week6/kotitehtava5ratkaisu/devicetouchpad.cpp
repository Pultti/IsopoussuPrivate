#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{
    touchPadSensitivity = 0;
}

void DeviceTouchPad::setTouchPadSensitivity()
{
   cin>>touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
