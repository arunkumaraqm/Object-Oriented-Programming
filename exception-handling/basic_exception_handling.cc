#include <iostream>
#include <new>
#include <cmath>
using namespace std;
double mysqrt(double);

int main(int argc, char const *argv[])
{
	int number = -1;
	try
	{
		if (number < 0)
			throw "cannot sqrt a negative no. #1";
		else cout << sqrt(number)<<endl;
		cout << "control never reaches here if exception is thrown"<<endl;
	}
	catch (const char* err) 
	// catch (string err) and catch (char* arr) don't work because no implicit conversions are made
	{cerr << err << endl;}

	number = -1;
	try
	{
		if (number < 0)
			//throw static_cast<string>("cannot sqrt a negative no. #2");
			throw "cannot sqrt a negative no. #2";
		else cout << sqrt(number)<<endl;
		cout << "control never reaches here if exception is thrown"<<endl;
	}
	catch (string& err) 
	{cerr << err << endl;}

	number = -1;
	try
	{
		try
		{
			if (number < 0)
				throw static_cast<string>("cannot sqrt a negative no. #3");
			else cout << sqrt(number)<<endl;
			cout << "control never reaches here if exception is thrown"<<endl;
		}

		catch (int err) 
		{cerr << err << endl;}
	}
	catch (string& err) 
	{cerr << err << endl;}
	

	number = -1;
	try
	{
		double ans = mysqrt(number);
		cout << ans << endl;
	}
	catch (const char* err) 
	{cerr << err << endl;}

}

double mysqrt(double a)
{
	if (a < 0) throw "cannot sqrt a negative no. #4";
	else return sqrt(a);
}