#include <iostream>
#include "Computer.h"
#include "Mouse.h"
#include "keyBoard.h"
using namespace std;

int main()
{
    Computer *macbook = new Computer();
    Mouse *logi = new Mouse();
    KeyBoard *cherry = new KeyBoard();

    cout << "-------------------------------" << endl;
    macbook->powerOn(*logi);          //open mouse
    macbook->powerOn(*cherry);        //open keyboard
    cout << "- - - - - - - - - - - - - - - -" << endl;
    macbook->powerOff(*logi);         //close mouse
    macbook->powerOff(*cherry);       //close keyboard
    cout << "-------------------------------" << endl;

    delete macbook;
    delete logi;
    delete cherry;

    return 0;
}