#include <iostream>
using namespace std;

bool isLonger(const string &s1, const string &s2)
{
    return s1.size() > s2.size();
}

int main()
{
    string s1 = "zhoujirui";
    string s2 = "zhangjiao";
    
    cout << isLonger(s1, s2) << endl;
    return 0;
}