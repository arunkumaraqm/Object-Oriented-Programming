// Compiled with g++ (GCC) 7.4.0 using Cygwin
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string m_name;
public:
	Animal(string name): m_name(name) {}
	virtual string speak() {return "none";}
};

class Dog: public Animal
{
public:
	Dog(string name): Animal(name){}
	string speak() {return "woof";};
};
int main()
{
	Dog fred("fred");
	cout << fred.speak() << endl;
	
	Animal& ani = fred;
	cout << ani.speak() << endl;

	Animal* mammal = &fred;
	cout << mammal->speak() << endl;

}