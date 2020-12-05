#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        Car(string con_carname, int con_seats) :m_strCarName(con_carname), m_nSeats(con_seats)
        {
            cout << "Calling Car constructor, set carname and seats!" << endl;
        }

        Car(string con_carname = "my new car")
        {
            cout << "Calling Car constructor, set carname!" << endl;
            m_strCarName = con_carname;
            m_nSeats = 4;
        }

        void disp_memmsg()
        {
            cout << "carname: " << m_strCarName << ", " << "seats = " << m_nSeats << endl;
        }

    private:
        string m_strCarName;
        int m_nSeats;
};

int main()
{
    Car mycar;
    Car tomcar("tom's car");
    mycar.disp_memmsg();
    tomcar.disp_memmsg();

    return 0;
}