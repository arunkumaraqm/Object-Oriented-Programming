/*
1. Write a C++ program to define the concepts of declaring the class, its data members and
member functions. Also write a main () function which declares the objects and uses the
member functions of the class. 
*/

#include <iostream>

using namespace std;

class Employee
{
private:
	int id;
	string name;
	float salary;

public:
	void read_employee()
	{
		cin >> id >> name >> salary;
	}
	void show_employee()
	{
		cout << id << " " << name << " "<< salary << endl;
	}
};

int main()
{
	Employee salesman;
	salesman.read_employee();
	salesman.show_employee();
}
