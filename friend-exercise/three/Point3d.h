#ifndef POINT_3D_H
#define POINT_3D_H

#include <cstdio>

class Vector3d;

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
	void move_by_Vector(const Vector3d&);
	
};

#endif