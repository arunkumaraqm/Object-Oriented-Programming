/ 3. Write a C++ program to showcase the concepts of friend classes and constructors 

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
};

class Point3d
{
	double x, y, z;

public:
	Point3d(double x, double y, double z)
	: x(x), y(y), z(z) { }

	// getting point from position vector
	Point3d(Vector3d& vec)
	{
		x = vec.x; y = vec.y; z = vec.z;
	}

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
	Vector3d position_vec{-5, 6, 8};
	Point3d point(position_vec);
	point.print();
}
