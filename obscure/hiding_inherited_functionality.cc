#include <iostream>

using namespace std;
class Base
{
public:
	int x;
	void public_method() {x = 5;}
	void second_public_method() {x = 6;}
private:
	void private_method() {}
protected:
	void protected_method() {}	
};

class Deri: public Base
{
private:
	using Base:: public_method;
public:
	using Base:: protected_method;
	void second_public_method() = delete;
};

int main ()
{
	Deri deri;
	deri.protected_method();
	// deri.public_method(); - inaccessible
	static_cast<Base>(deri).public_method();
	// deri.second_public_method(); - error, use of deleted function
	cout << deri.x;
}
