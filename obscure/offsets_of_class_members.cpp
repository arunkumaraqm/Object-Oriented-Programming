#include <iostream>
using namespace std;
class cl
{
	int private_value;
	public:
		cl(int i) { val=i; }
		int val;
		int anotherval;
		int thirdval;
		int double_val() { return val+val; }
};
int main()
{
	int cl::*data; // pointer to data member
	int (cl::*func)(); // function member pointer
	cl ob1(1), ob2(2); // create objects
	data = &cl::val; // get offset of val
	func = &cl::double_val; // get offset of double_val()
	printf("%p %p %p %p\n", func, &cl::val, &cl::anotherval, &cl::thirdval);
	cout << "Here are values: ";
	cout << ob1.*data << " " << ob2.*data << "\n";
}
