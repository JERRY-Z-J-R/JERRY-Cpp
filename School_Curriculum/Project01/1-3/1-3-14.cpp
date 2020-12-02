#include <iostream>
using namespace std;

int main()
{
    char *pc = new char;
    int *pi = new int(10);
    double *pd = new double();

    cout << *pc << endl;
    cout << *pi << endl;
    cout << *pd << endl;

    delete pc;
    delete pi;
    delete pd;

    return 0;
}