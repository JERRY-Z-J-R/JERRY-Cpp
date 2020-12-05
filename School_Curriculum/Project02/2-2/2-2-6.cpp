#include <iostream>
#include <string>
using namespace std;

class Car
{
    public:
        void set_carname(string newname)
        {
            m_strCarName = newname;
        }

        string get_carname()
        {
            return m_strCarName;
        }

        void display_welcomemsg()
        {
            cout << "Welcome to the car world for " << m_strCarName << "!" << endl;
        }

    private:
        string m_strCarName;
};

int main()
{
    string new_carname;
    Car mycar;
    cout << "enter the car name: ";
    getline(cin, new_carname);
    mycar.set_carname(new_carname);
    mycar.display_welcomemsg();

    //mycar.m_strCarName = new_carname;    ERROR!!! 

    return 0;
}