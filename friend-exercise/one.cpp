// question here: https://www.learncpp.com/cpp-tutorial/813-friend-functions-and-classes/
// 1. friend class
#include <iostream>
#include <cstdio>

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
	pt.print();
	vec.print();
	pt.move_by_Vector(vec);
	pt.print();
}