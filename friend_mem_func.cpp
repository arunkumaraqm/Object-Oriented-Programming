// friendo
#include<iostream> 
using namespace std; 
//class bar;
class foo;

class bar
{
public:
	void disp(const foo&);
};
class foo
{
protected:
	int value;
public:
	foo() : value(0) {}
	friend void bar::disp(const foo&);
};

void bar::disp(const foo& f)
{
	cout << f.value;
}
int main()
{
	foo f;
	bar().disp(f);
}