#include <iostream>

#define pnl(something) cout << something << "\n"

using namespace std;

class goo
{
public:
	int x;
public:
	goo(int a, int b)
	{
		x = 2 * a;
	}
};

int main()
{
	goo arr[3] = {{7,9},{15, 9},{9, 3}};
	for (int i = 0; i < 3; ++i)
	{
		pnl(arr[i].x);
	}
}





















