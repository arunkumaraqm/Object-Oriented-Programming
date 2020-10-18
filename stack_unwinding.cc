#include <iostream>
#include <new>
#include <cmath>
using namespace std;

// note: endl used instead of \n so that output is flushed

void func4()
{
	cout << "func4 begins"<<endl;
	cout << "throwing 50"<<endl;
	//throw 50;
	//throw 50.0;
	throw "50";
	cout << "func4 ends"<<endl;
}

void func3()
{
	cout << "func3 begins"<<endl;
	func4();
	cout << "func3 ends"<<endl;
}

void func2()
{
	cout << "func2 begins"<<endl;
	try
	{
		func3();
	}
	catch(float)
	{
		cerr << "caught float exception from func2"<<endl;
	}
	cout << "func2 ends"<<endl;
}

void func1()
{
	cout << "func1 begins"<<endl; 
	try
	{
		func2();
	}
	catch(int)
	{
		cerr << "caught int exception from func1" << endl;
	}
	catch(float)
	{
		cerr << "caught float exception from func1"<<endl;
	}
	cout << "func1 ends"<<endl;
}
int main(int argc, char const *argv[])
{
	try
	{
		func1();
	}
	catch(...)
	{
		cerr << "abnormal termination"<<endl;
	}
}
