#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{
    primaryButton = 0;
}

void DeviceMouse::setPrimaryButton()
{
    cin>>primaryButton;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
