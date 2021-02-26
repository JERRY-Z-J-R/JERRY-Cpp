#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        Car()
        {
            cout << "Car constructor!" << endl;
            m_strCarName = "default name";
        }

        string get_carname()
        {
            return m_strCarName;
        }

    private:
        string m_strCarName;
};

int main()
{
    Car mycar;
    cout << "Car name: " << mycar.get_carname() << endl;

    return 0;
}
