#include <iostream>
#include <new>
#include <functional>
using namespace std;

class Cl
{
public:
	float a;
	Cl(int a) : a(a) {}
};

class De:protected Cl
{};

int main()
{
	De de(9);
}
