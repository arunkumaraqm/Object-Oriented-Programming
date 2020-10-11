// 15. Write a C++ program to demonstrate the concepts of default arguments and static
// member variable and member functions

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class IDGenerator
{
private:
	static int id;
public:
	static int nextid();
	static int reset_id_value(int);
};
int IDGenerator:: id = 100;
int IDGenerator:: nextid() {return id++;}
int IDGenerator:: reset_id_value(int new_id = 100)
{
	id = new_id;
}

int main(void)
{
	IDGenerator gen;
	cout << gen.nextid()<<endl;
	cout << gen.nextid()<<endl;
	cout << gen.nextid()<<endl;
	gen.reset_id_value(200);
	cout << gen.nextid()<<endl;
	cout << gen.nextid()<<endl;
	gen.reset_id_value();
	cout << gen.nextid()<<endl;
}
