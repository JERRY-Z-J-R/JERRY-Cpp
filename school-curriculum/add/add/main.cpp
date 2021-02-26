#include<iostream>
#include"add.h"
using namespace std;

int main()
{
	Add<int> add(1,2);
	cout << add.plus() <<endl;
	return 0;
}


