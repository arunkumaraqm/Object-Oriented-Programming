#include <iostream>

using namespace std;

class MyClass
{
	float f_y;

	string echo(string something)
	{
		return something;
	}

public:
	int i_y;

	MyClass() : i_y (65), f_y (56.75) {}

	void print() const
	{
		cout << i_y << ", " << f_y << "\n";
	}

	float give_me_pi_times(int number)
	{
		return 3.14 * number;
	}
};

float something(int some) {return 89;}

float foo(int bar){return 8009;}

int main()
{
	MyClass object, *ptr_to_object;
	ptr_to_object = &object;

	int MyClass::* ptr_to_member = &MyClass:: i_y;

	object.*ptr_to_member = 650;
	object.print();
	ptr_to_object->*ptr_to_member = 6500;
	object.print();		 

	// Next line gives error "'float MyClass::f_y' is private within this context"
	//float MyClass::* ptr_to_private_member = &MyClass:: f_y;

	// Note: func and &func do the same thing.
	
	// Syntax for regular func pointer
	// returntype (*name) (list of param types)
	// name = func;
	// Call using name(params) 

	float (*ptr_to_func) (int) = something;
	cout << ptr_to_func(5) << endl;

	// Syntax for pointer to method
	// returntype (classname::*name) (list of param types)
	// name = classname::func
	// Call using (object.*name)(params)
	float (MyClass:: *ptr_to_method) (int); ptr_to_method = MyClass::give_me_pi_times;
	cout << (object.*ptr_to_method)(1) << "\n";
}

















