#include <iostream>
using namespace std;

int main()
{
    int *pi = new int[10]();
    char *pc = new char[10];
    double *pd = new double[0];

    delete []pi;
    delete []pc;
    delete []pd;

    return 0;
}