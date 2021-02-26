#include <iostream>
using namespace std;

class Car
{
public:
    void disp_welcomemsg();
    int get_wheels();
    void set_wheels(int);

private:
    int m_nWheels;
};

void Car::disp_welcomemsg()
{
    cout << "Welcome to the car world!" << endl;
}

int Car::get_wheels()
{
    return m_nWheels;
}

void Car::set_wheels(int n)
{
    m_nWheels = n;
}

int main()
{
    Car *mycar = new Car();
    mycar->disp_welcomemsg();
    mycar->set_wheels(4);
    cout << "wheels = " << mycar->get_wheels() << endl;
    delete mycar;
    return 0;
}