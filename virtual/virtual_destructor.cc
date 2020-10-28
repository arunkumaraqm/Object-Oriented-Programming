#include <iostream>
#include <new>
#include <functional>
using namespace std;

class Base
{
public:
	~Base() // add virtual before this to fix 
	{
		cout << "base destructor\n";
	}
};
class Derived: public Base
{
	int* arr;
public:
	Derived(){arr = new int [5];}
	~Derived(){
		cout << "deri destructor\n";		
		delete[] arr;
	}
};

int main(int argc, char const *argv[])
{
	Derived* d = new Derived;
	Base* b = d;
	delete b;
	return 0;
}