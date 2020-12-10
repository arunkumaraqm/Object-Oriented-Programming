#include <iostream>
#include <iomanip>
// #include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	cout.setf(ios::hex, ios::basefield);
	cout 	<< 1234 << endl;
	
	cout.setf(ios::uppercase);
	cout 	<< 1234 << endl;
	cout 	<< endl;

	cout.setf(ios::dec, ios::basefield);

	float number = 1234.5678;
	cout 	<< showpos;

	cout 	<< scientific 
			<< number << endl;

	cout 	<< setprecision(3) 
			<< number << endl;

	cout    << noshowpos;

	cout	<< fixed
		 	<< setprecision(2) 
			<< number << endl;

	cout 	<< endl;

	cout.fill('_');

	cout 	<< setw(4) 
			<< number << endl;

	cout 	<< setw(10) 
			<< number << endl;

	cout 	// setw is not persistent
			<< number << endl;

	cout.setf(ios::showpos);

	cout 	<< setw(10) << internal
			<< number << endl;

	cout 	<< setw(10) << left
			<< number << endl;

	cout 	<< setw(10) << right
			<< number << endl;
}

/*
	4d2
	4D2

	+1.234568E+03
	+1.235E+03
	1234.57

	1234.57
	___1234.57
	1234.57
	+__1234.57
	+1234.57__
	__+1234.57
*/