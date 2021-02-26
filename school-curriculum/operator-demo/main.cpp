#include <iostream>
using namespace std;

class A {
private:
	int n;
	int m;
public:
	A(int a = 0, int b = 0);
	~A();
	void show();
	A operator ++();
	A operator ++(int);
};

A::A(int a, int b) :n(a), m(b)
{
	cout << "gouzao yes!" << endl;
}

A::~A()
{
	cout << "xigou yes!" << endl;
}

void A::show()
{
	cout << "(n, m) = (" << n << ", " << m << ")" << endl;
}

A A::operator ++()
{
	++n;
	++m;
	return *this;
}

A A::operator ++(int)
{
	A a = *this;
	++(*this);
	return a;
}

int main()
{
	A a(1, 2), b(3, 4);
	(++a).show();
	(b++).show();

	return 0;
}