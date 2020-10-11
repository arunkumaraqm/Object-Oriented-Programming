//12. Explain the concepts of constructor overloading and pointer to functions 
// The most intentionally ridiculous program I've written.
// The design is horrible.

// Compiled with g++ (GCC) 7.4.0 using Cygwin
#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
using namespace std;

typedef array<double, 3> Thruple;

class Box
{
private:
	double length, width, height;

public:
	Box(double l = 0): length(l), width(l), height(l) 
	{
		cout << "Cubic box.\n";
	}

	Box(double l, double w, double h):
	length(l), width(w), height(h)
	{
		cout << "Custom box from dimensions.\n";
	}
	
	Box(Thruple t):
	length(t[0]), width(t[1]), height(t[2])
	{
		cout << "Custom box from array of three.\n";
	}

	double volume()
	{
		return length * width * height;
	}
	double area() 
	{
		return length * width;
	}
	double get_height()
	{
		return height;
	}

	friend ostream& operator<<(ostream& out, Box& some_box);
};

bool cmp_volume(Box& a, Box& b)
{
	return a.volume() > b.volume();
}
bool cmp_area(Box& a, Box& b)
{
	return a.area() > b.area();
}
bool cmp_height(Box& a, Box& b)
{
	return a.get_height() > b.get_height();
}

ostream& operator<<(ostream& out, Box& some_box)
{
	out << "("
		<< some_box.length << " * "
	    << some_box.width << " * " 
	    << some_box.height 
	    << " = "
	    << some_box.volume()
	    << ")";
}

void sort_by_and_display(vector<Box> boxes, int nf_boxes, bool (*cmp) (Box&, Box&))
{
	// Sorting boxes by volume asc
	sort(begin(boxes), end(boxes), cmp);

	cout << "Sorted boxes:\n";
	for (auto ibox: boxes)
	{
		cout << ibox << ",\n";
	}
	cout << endl;
}
int main()
{
	cout << "Initializing boxes array:\n";
	array<double, 3> first_box = {89, 47, 54};
	vector<Box> boxes = {
		{3.0, 2.0, 0.8},
		2,
		{0.0, 5.9, 7.5},
		first_box
	};
	cout << '\n';

	typedef bool (*BoxCompare) (Box&, Box&);
	BoxCompare cmps[] = {cmp_area, cmp_volume, cmp_height};
	for (auto cmp = begin(cmps); cmp != end(cmps); ++cmp)
		sort_by_and_display(boxes, 4, *cmp);
	
}