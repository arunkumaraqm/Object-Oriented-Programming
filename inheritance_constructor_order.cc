// Compiled with g++ (GCC) 7.4.0 using Cygwin
#include <iostream>

using namespace std;

class Base
{
public:
	const int m_x;
	Base(int x = 2) : m_x(x)
	{
		cout << "base constructor\n";
	}
	
};


class Derived: public Base
{
public:
	float m_f;
	Derived(float f = 3.4, int x = 3) : Base(4), m_f(f)
	{
		cout << "Derived constructor\n";
	}
	void show()
	{
		cout << m_x << ' '<< m_f <<'\n';
	}
	
};
int main()
{
	Derived d;
	d.show();
}