#include "array.h"
#include <iostream>
#include <cassert>
using namespace std;

// class Array<double>;
int main()
{
	Array<double> arr(5, 84.9);
	cout << arr;
	cout << arr.get_length();
}
