#include <iostream>
using namespace std;

inline void func()
{
    cout << "这是一个内联函数" << endl;
}

int main()
{
    func();

    return 0;
}