#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    s1 = "hello C++";
    string s2 = "hello C++";
    string s3("hello C++");
    string s4(6, 'a');

    cout << s1 << s2 << s3 << s4 << endl;

    return 0;
}