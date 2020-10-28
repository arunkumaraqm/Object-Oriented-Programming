// https://www.learncpp.com/cpp-tutorial/114-constructors-and-initialization-of-derived-classes/
// Compiled with g++ (GCC) 7.4.0 using Cygwin
#include <iostream>

using namespace std;

class Fruit
{
private:
	string m_name;
	string m_color;
public:
	Fruit(const string name, const string color)
	: m_name(name), m_color(color) 
	{}

	string get_name() const {return m_name;}
	string get_color() const {return m_color;}
};

class Apple: public Fruit
{
private:
	float m_fiber;
public:
	Apple(const string name, const string color, const float fiber)
	: Fruit(name, color), m_fiber(fiber) 
	{}

	friend ostream& operator<< (ostream& out, const Apple& app);
};

ostream& operator<< (ostream& out, const Apple& app)
{
	out << "Apple("<<app.get_name()<<", "<<app.get_color()<<", "<<app.m_fiber<<")";
	return out;
}

class Banana: public Fruit
{
public:
	Banana(const string name, const string color)
	: Fruit(name, color)
	{}
	friend ostream& operator<< (ostream& out, const Banana& ban);
};

ostream& operator<< (ostream& out, const Banana& ban) 
{
	out << "Banana("<<ban.get_name()<<", "<<ban.get_color()<<")";
	return out;
}

int main()
{
	const Apple a{ "Red delicious", "red", 4.2 };
	std::cout << a << '\n';
 
	const Banana b{ "Cavendish", "yellow" };
	std::cout << b << '\n';
 
	return 0;
}