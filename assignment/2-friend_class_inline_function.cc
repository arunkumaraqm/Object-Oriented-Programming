
// 2.  Write a C++ program by combining the concepts of friend class and inline functions. 

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class Vector3d
{
	double x, y, z;

public:
	Vector3d(double x, double y, double z)
	: x(x), y(y), z(z) { }

	void print()
	{
		printf("Vec(%lf %lf %lf)\n", x, y, z);
	}

	friend class Point3d;	
	Vector3d unit_vector();
};

inline double square(double x){return x*x;}

inline Vector3d Vector3d:: unit_vector()
{
	double magnitude = sqrt(square(this->x) + square(this->y) + square(this->z));
	Vector3d unit = *this; 

	unit.x /= magnitude;
	unit.y /= magnitude;
	unit.z /= magnitude;

	return unit;
}

class Point3d
{
	double x, y, z;

public:
	Point3d(double x, double y, double z)
	: x(x), y(y), z(z) { }

	void print()
	{
		printf("Point(%lf %lf %lf)\n", x, y, z);
	}

	void move_by_Vector(const Vector3d& vec)
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;
	}
};


int main(void)
{
	Point3d pt{4, 3, 0};
	Vector3d vec{-5, 6, 8};
	cout << "Moving\n"; pt.print();
	cout << "by\n"; vec.print();
	cout << "gives\n"; 
	pt.move_by_Vector(vec);
	pt.print();

	cout << endl;
	cout << "Unit vector of\n"; vec.print();
	cout << "is\n"; vec.unit_vector().print();
}