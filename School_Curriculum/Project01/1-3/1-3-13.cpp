#include <iostream>
using namespace std;

int main()
{
    const int &a = 10;

    const int b = 10;
    const int &c = b;

    int d = 10;
    const int &e = d;

    double f = 1.2;
    const int &g = f;
    
    // double f = 1.2;
    // const int temp = (int)f;
    // const int &g = temp;

    return 0;
}