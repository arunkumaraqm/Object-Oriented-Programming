/*
6. Write a C++ program to for passing class objects as functional arguments 
*/

#include <iostream>

using namespace std;

class Employee
{
public:
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

void give_raise(Employee& worker, float raise)
{
	worker.salary += raise;
}
int main()
{
	Employee salesman;
	salesman.read_employee();
	give_raise(salesman, 50);
	salesman.show_employee();
}
