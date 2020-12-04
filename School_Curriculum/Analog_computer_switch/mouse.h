#ifndef MOUSE_H
#define MOUSE_H
#include <iostream>
#include "usb.h"
using namespace std;

class Mouse: public Usb
{
    public:
        void turnOn();      //open mouse
        void turnOff();     //close mouse
};

void Mouse::turnOn()        //open mouse
{
    cout << "\tMouse turnOn" << endl;
}

void Mouse::turnOff()       //close mouse
{
    cout << "\tMouse turnOff" << endl;
}

#endif