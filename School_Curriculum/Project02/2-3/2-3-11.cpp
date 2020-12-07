#include <iostream>
#include <cstring>
using namespace std;

class Car
{
    public:
        Car(char *con_pcarname, int con_seats);
        Car(Car &con_refcar);
        ~Car();

    private:
        char *m_pCarName;
        int m_nSeats;
};

Car::Car(char *con_pcarname, int con_seats)
{
    int len = strlen(con_pcarname) + 1;
    m_pCarName = new char[len];
    strcpy(m_pCarName, con_pcarname);
    m_nSeats = con_seats;
}

Car::Car(Car &con_refcar)
{
    cout << "calling copy constructor!" << endl;
    m_pCarName = con_refcar.m_pCarName;
    m_nSeats = con_refcar.m_nSeats;
    cout << "end of copy constructor!" << endl;
}

Car::~Car()
{
    cout << "destructor is called!" << endl;
    delete[] m_pCarName;
}

int main()
{
    Car mynewcar("my new car", 4);
    Car myseccar(mynewcar);

    return 0;
}