#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        Car();
        Car(string con_carname, int con_seats);
        Car(Car &refcar);
        ~Car();
        Car get_carinfo();
        void print();

    private:
        string m_strCarName;
        int m_nSeats;
};

Car::Car()
{
    cout << "constructor!" << endl;
}

Car::Car(string con_carname, int con_seats)
{
    cout << "Car constructor with params!" << endl;
    m_strCarName = con_carname;
    m_nSeats = con_seats;
}

Car::Car(Car &con_refcar)
{
    cout << "Car cp constructor!" << endl;
    m_strCarName = con_refcar.m_strCarName;
    m_nSeats = con_refcar.m_nSeats;
}

Car::~Car()
{
    static int i = 0;
    cout << "destructor is called!" << endl;
    if (i == 3) {
        system("pause");
    }
    i++;
}

Car Car::get_carinfo()
{
    Car tmp(m_strCarName, m_nSeats);
    return tmp;
}

void Car::print()
{
    cout << "carname: " << m_strCarName << ", " << "seats: " << m_nSeats << endl;
}

int main()
{
    Car mynewcar("my firsts car", 4);
    Car ret;
    ret = mynewcar.get_carinfo();
    ret.print();
    return 0;
}