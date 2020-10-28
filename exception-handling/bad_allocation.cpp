#include <iostream>
#include <new>
using namespace std;

int main()
{
	int * ptr;
	try{
		ptr = new int [10000000000];
	}
	catch(bad_alloc& ba)
	{
		cerr << "too much";
	}
	printf("%p", ptr);
	delete [] ptr;	
}
