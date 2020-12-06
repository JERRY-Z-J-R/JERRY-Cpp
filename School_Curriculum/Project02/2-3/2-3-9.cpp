#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        Car(string con_carname, int con_seats);
        Car(Car &refcar);
        ~Car();
        void print();

    private:
        string m_strCarName;
        int m_nSeats;
};

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
    if (i == 1) {
        system("pause");
    }
    i++;
}

void Car::print()
{
    cout << "carname:" << m_strCarName << ", " << "seats: " << m_nSeats << endl;
}

void print_carinfo(Car carinfo)
{
    carinfo.print();
}

int main()
{
    Car mynewcar("my first car", 4);
    print_carinfo(mynewcar);
    return 0;
}