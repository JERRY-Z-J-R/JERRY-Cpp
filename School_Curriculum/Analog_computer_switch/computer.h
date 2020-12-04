#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include "usb.h"
using namespace std;

class Computer
{
    public:
        Computer();
        void powerOn(Usb &usb);     //open usb(mouse or keybord)
        void powerOff(Usb &usb);    //close usb(mouse or keybord)
        ~Computer();
};

Computer::Computer()
{
    cout << "\nComputer booted successfully" << endl;     //open computer
}

void Computer::powerOn(Usb &usb)    //open usb(mouse or keybord)
{
    usb.turnOn();
}

void Computer::powerOff(Usb &usb)   //close usb(mouse or keybord)
{
    usb.turnOff();
}

Computer::~Computer()
{
    cout << "Computer shut down successfully" << endl;   //close computer
}

#endif