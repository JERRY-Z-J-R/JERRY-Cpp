#include <iostream>
using namespace std;

namespace A1
{
    int a = 10;
}

void way1();
void way2();
void way3(); 

int main()
{
    way1();
    way2();
    way3();

    return 0;
}

void way1()
{
    cout << A1::a;
}

void way2()
{
    using A1::a;
    cout << a;
}

void way3()
{
    using namespace A1;
    cout << a;
}