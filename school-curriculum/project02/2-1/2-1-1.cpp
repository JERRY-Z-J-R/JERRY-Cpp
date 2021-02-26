#include <iostream>
using namespace std;

class Car
{
    public:
        void disp_welcomemsg()
        {
            cout << "Welcome to the car world!" << endl;
        }

        int get_wheels()
        {
            return m_nWheels;
        }
    
    private:
        int m_nWheels;
        int m_nSeats;
        int m_nLength;
};

int main()
{
    return 0;
}