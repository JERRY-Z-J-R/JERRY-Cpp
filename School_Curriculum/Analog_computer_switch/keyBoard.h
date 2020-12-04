#ifndef KEYBOARD_H
#define KEYBOARD_H
#include <iostream>
#include "usb.h"
using namespace std;

class KeyBoard: public Usb
{
    public:
        void turnOn();      //open keybord
        void turnOff();     //close keybord
};

void KeyBoard::turnOn()     //open keybord
{
    cout << "\tKeyBoard turnOn" << endl;
}

void KeyBoard::turnOff()    //close keybord
{
    cout << "\tKeyBoard turnOff" << endl;
}

#endif