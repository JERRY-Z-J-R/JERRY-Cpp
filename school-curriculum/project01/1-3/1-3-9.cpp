#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int &p = a;
    p = b;

    // int &c;  Error

    cout << a << endl;
    cout << b << endl;
    cout << p << endl;

    return 0;
}