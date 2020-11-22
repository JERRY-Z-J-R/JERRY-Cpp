#include <iostream>
using namespace std;

int main()
{
    bool b;

    int *p = NULL;
    b = p;
    cout << b << endl;  //0

    int a = 10;
    p = &a;
    b = p;
    cout << b << endl;  //1

    return 0;
}