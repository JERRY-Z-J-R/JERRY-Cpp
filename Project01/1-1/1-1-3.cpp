#include <iostream>

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
    std::cout << "1" << std::endl;
}

void way2()
{
    using std::cout;
    using std::endl;
    cout << "2" << endl;
}

void way3()
{
    using namespace std;
    cout << "3" << endl;
}