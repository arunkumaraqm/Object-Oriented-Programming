#include <iostream>
using namespace std;
class Base
{
public:
	int foo;
	Base() : foo(0) {}
	Base(int foo) : foo(foo) {}

	void base_class_func()
	{
		cout << "base_class_func\n";
	}
};

class Derived: public Base
{
public:
	int bar;
	void derived_class_func()
	{
		cout << "derived_class_func\n";
	}
};

int main()
{
	Base* bptr;
	Derived dobj;
	bptr = &dobj;
	bptr->base_class_func();
	//bptr->derived_class_func(); // error: class Base has no member derived_class_func
	((Derived*) bptr) -> base_class_func();
	((Derived*) bptr) -> derived_class_func();
}