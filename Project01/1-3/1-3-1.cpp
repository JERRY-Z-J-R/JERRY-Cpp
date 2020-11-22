#include <iostream>
using namespace std;

bool isPrime(int x);
bool great(int x, int y);

int main()
{
    bool a;
    a = 3 == 3;
    cout << a << endl;  //1 true
    a = 3 == 4;
    cout << a << endl;  //0 false

    int count = 0;
    bool flag = true;
    while (flag) {
        cout << count << endl;
        if (count < 100) {
            count++;
        }
        else {
            flag = false;
        }
    }   //0~100

    int num;
    cout << "input num:";
    cin >> num;

    if (isPrime(num) == true) {
        cout << num << " is " << "prime." << endl;
    }
    else {
        cout << num << " is not " << "prime." << endl; 
    }

    int num1, num2;
    cout << "input num1, num2:";
    cin >> num1 >> num2;

    if (great(num1, num2) == true) {
        cout << "num1 > num2" << endl;
    }
    else {
        cout << "num1 < num2" << endl;
    }

    return 0;
}

bool isPrime(int x) 
{
    bool flag = true;

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            flag = false;
            break;
        }
    }

    return flag;
}

bool great(int x, int y)
{
    return x > y;
}