#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        Car(string con_carname)
        {
            m_strCarName = con_carname;
        }

    private:
        string m_strCarName;
};

int main()
{
    Car mycar;  //ERROR! 类Car不存在默认的构造函数！没有合适的构造函数可以使用！
    return 0;
}