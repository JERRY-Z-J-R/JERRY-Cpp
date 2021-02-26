#include <iostream>
#include "add.h"
using namespace std;

int main()
{
	Add<int>* addTest = new Add<int>();
	addTest->setNum1(2);
	addTest->setNum2(3);
	cout << addTest->add() << endl;
	return 0;
}