#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    double *pd = (double*)p;

    double c = 3.14;

    pd = &c;
    // d = &c; Error

    return 0;
}