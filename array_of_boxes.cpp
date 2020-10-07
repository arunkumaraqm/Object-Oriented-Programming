// Compiled with g++ (GCC) 7.4.0 using Cygwin
#include <iostream>
#include <algorithm>
using namespace std;
class Box
{
private:
	double length, width, height;

	double volume()
	{
		return length * width * height;
	}

public:
	Box(): length(0), width(0), height(0) {}

	Box(double l, double w, double h):
	length(l), width(w), height(h)
	{
		cout << "Constructor called with double params.\n";
	}

	Box(int l, int w, int h):
	length(l), width(w), height(h)
	{
		cout << "Constructor called with int params.\n";
	}

	// wise to have operator< instead
	bool is_greater_than(Box& other)
	{
		return this->volume() > other.volume();
	}

	friend ostream& operator<<(ostream& out, Box& some_box);
};

ostream& operator<<(ostream& out, Box& some_box)
{
	out << "("
		<< some_box.length << " * "
	    << some_box.width << " * " 
	    << some_box.height << " * "
	    << " = "
	    << some_box.volume()
	    << ")";
}


int main()
{
	cout << "Initializing boxes array:\n";
	Box first_box = {89, 47, 54};
	Box boxes[4] = {
		{5, 6, 7},
		{3.0, 2.0, 1.8},
		first_box,
		{0.0, 5.9, 7.5},
	};
	cout << '\n';

	// Sorting boxes by volume asc
	sort(begin(boxes), end(boxes), 
		[](Box& one, Box& two) // lambda function for custom cmp
		{
			return not one.is_greater_than(two);
		});

	cout << "Sorted boxes:\n";
	for (auto ibox: boxes)
	{
		cout << ibox << ",\n";
	}
	cout << endl;
}