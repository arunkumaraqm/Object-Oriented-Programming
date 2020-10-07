/*
7. Write a C++ program to show the usage of arrays inside the class and array of objects 
*/

#include <iostream>

using namespace std;

class Employee
{
private:
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

class Team
{
private:
	static const int MAX_SIZE = 10;
	Employee members[MAX_SIZE];
	int size;

public:
	// The Employee constructor is called for each of the 10 members here.
	Team() : size(0) {}

	void add_member(Employee& emp)
	{
		members[size++] = emp;
	}
	void show_members()
	{
		for (int i = 0; i < size; ++i)
		{
			cout << members[i].get_name()<< endl;
		}
	}
};
int main()
{
	Employee all_employees[5] = {
		{101, "alice"}, 
		{102, "bob"},
		{103, "cyril"},
		{104, "derek"},
		{105, "eamonn"},
	};
	Team group1;
	for (int i = 0; i < 5; ++i)
	{
		if (i % 2 == 0)
		{
			group1.add_member(all_employees[i]);
		}
	}
	group1.show_members();
}
