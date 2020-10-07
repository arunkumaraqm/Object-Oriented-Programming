/*
9. Write a C++ program to define the concept of pointers to objects, passing reference to
functions and return by reference. 
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Employee
{
	int id;
	string name;

public:
	Employee(int id = 0, string name = "") :
	id(id), name(name) {}

	void read_employee()
	{
		cin >> id >> name;
	}
	void show_employee()
	{
		cout << id << " " << name << " "<< endl;
	}
	string get_name() {return name;}
};

Employee& get_employee_with_largest_name(vector<Employee>& employees)
{
	Employee* largest_name_emp = &employees[0];
	for (int i = 0; i < employees.size(); ++i)
	{
		if (largest_name_emp->name.length() < employees[i].name.length())
		{
			largest_name_emp = &employees[i];
		}
	}
	return *largest_name_emp;
}

int main()
{
	vector<Employee> all_employees = {
		{101, "alice"}, 
		{102, "bob"},
		{103, "jacobian"},
		{104, "derek"},
		{105, "eamonn"},
	};
	get_employee_with_largest_name(all_employees).show_employee();
}
