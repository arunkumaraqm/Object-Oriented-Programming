// Compiled with g++ (GCC) 7.4.0 using Cygwin
#include <iostream>
#include <string>
using namespace std;

class Animal // abstract class
{
protected:
	string m_name;
public:
	Animal(string name): m_name(name) {}
	virtual string speak() = 0; // pure virtual func
	virtual ~Animal() {}
};
string Animal:: speak()
{
	cout << "in speak"<<endl;
	return "";
}

class Dog: public Animal
{
public:
	Dog(string name): Animal(name){}
	string speak() override
	{
		Animal::speak(); 
		return "woof";
	}
	virtual ~Dog() {}
};
int main()
{
	Dog fred("fred");
	cout << fred.speak() << endl;
	
	Animal& ani = fred;
	cout << ani.speak() << endl;

	// Animal* mammal = &fred;
	// cout << mammal->speak() << endl;

	//Animal monkey("mon");

}