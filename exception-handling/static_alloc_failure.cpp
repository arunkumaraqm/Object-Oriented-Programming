#include <iostream>
#include <new>
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
	const int size = (int)1e7;
	int i;
	int a[size];
	for (i = 0; i < size; ++i)
		a[i] = i;
	int *b;
	try {b = new int[size];}
	catch(bad_alloc& ba)
	{cerr<<ba.what(); return 1;}
	

	for (i = 0; i < size; ++i)
		b[i] = a[i];

	delete [] b;
	return 0;
}
