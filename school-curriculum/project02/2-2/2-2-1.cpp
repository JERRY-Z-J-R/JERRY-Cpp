#include <iostream>
using namespace std;

class Car
{
    public:
        void disp_welcomemsg();
        int get_wheels();
    
    private:
        int m_nWheels;
        int m_nSeats;
        int m_nLength;
};

void Car::disp_welcomemsg()
{
    cout << "Welcome to the car world!" << endl;
}

int Car::get_wheels()
{
    return m_nWheels;
}

int main()
{
    return 0;
}