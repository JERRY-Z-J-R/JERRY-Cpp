#include <iostream>
using namespace std;

namespace A1
{
    int a = 10;
}

namespace A2
{
    int a = 20;
}

int main()
{
    cout << A1::a + A2::a;

    return 0;
}