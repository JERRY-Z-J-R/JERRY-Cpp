#ifndef USB_H
#define USB_H
#include <iostream>
using namespace std;

class Usb
{
    public:
        virtual void turnOn();      //open usb(mouse or keybord)
        virtual void turnOff();     //close usb(mouse or keybord)
};

void Usb::turnOn()                  //open usb(mouse or keybord)
{
    cout << "\tUsb turnOn" << endl;
}

void Usb::turnOff()                 //close usb(mouse or keybord)
{
    cout << "\tUsb turnOff" << endl;
}

#endif