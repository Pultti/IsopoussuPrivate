#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    pDeviceMouse = new DeviceMouse;
    pDeviceDisplay = new DeviceDisplay;
    pDeviceTouchPad = new DeviceTouchPad;
}

MyDeviceUI::~MyDeviceUI()
{
    delete pDeviceDisplay;
    pDeviceDisplay = nullptr;

    delete pDeviceMouse;
    pDeviceMouse = nullptr;

    delete pDeviceTouchPad;
    pDeviceTouchPad = nullptr;
}

void MyDeviceUI::showMenu()
{

    short menu = 0;
    while(menu !=5)
    {
        cout<<"1: Set Mouse Information"<<endl;
        cout<<"2: Set TouchPad Information"<<endl;
        cout<<"3: Set Display Information"<<endl;
        cout<<"4: Show Devices Information"<<endl;
        cout<<"5: Finish"<<endl<<endl;
        cout<<"Chooose:"<<endl;
        cin>>menu;
        switch(menu)
        {
        case 1:
             this->setMouse();
         break;
         case 2:
             this->setDisplay();
         break;
         case 3:
             this->setTouchPad();
         break;
         case 4:
             this->showInfo();
         break;
        }
    }
}

void MyDeviceUI::setMouse()
{
    cout << endl;
    cout << "SET MOUSE INFORMATION" << endl;
    cout << "=====================" << endl;
    cout << "Set Mouse Device ID: ";
    pDeviceMouse->setDeviceID();
    cout << "Set Mouse Primary Button: ";
    pDeviceMouse->setPrimaryButton();

}

void MyDeviceUI::setTouchPad()
{
    cout << endl;
    cout << "SET TOUCH PAD INFORMATION" << endl;
    cout << "=========================" << endl;
    cout << "Set Touch Pad Device ID: ";
    pDeviceTouchPad->setDeviceID();
    cout << "Set Touch Pad Sensitivity: ";
    pDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::setDisplay()
{
    cout << endl;
    cout << "SET DISPLAY INFORMATION" << endl;
    cout << "======================" << endl;
    cout << "Set Display Device ID: ";
    pDeviceDisplay->setDeviceID();
    cout << "Set Display Resolution: ";
    pDeviceDisplay->setDisplayResolution();

}

void MyDeviceUI::showInfo()
{
    cout << endl;
    cout << "DEVICE INFORMATION" << endl;
    cout << "==================" << endl;
    cout << "Mouse Device ID: " << pDeviceMouse->getDeviceID() << endl;
    cout << "Mouse Primary Button: " << pDeviceMouse->getPrimaryButton() << endl;
    cout << endl;

    cout << "Touch Pad Device ID: " << pDeviceTouchPad->getDeviceID() << endl;
    cout << "Touch Pad Sensivity: " << pDeviceTouchPad->getTouchPadSensitivity() << endl;
    cout << endl;

    cout << "Display Device ID: " << pDeviceDisplay->getDeviceID() << endl;
    cout << "Display Resolution: " << pDeviceDisplay->getDisplayResolution() << endl;

}
