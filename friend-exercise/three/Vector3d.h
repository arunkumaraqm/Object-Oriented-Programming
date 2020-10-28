#ifndef VECTOR_3D_H
#define VECTOR_3D_H

#include <cstdio>
#include "Point3d.h"
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

	friend void Point3d:: move_by_Vector(const Vector3d&);
};
#endif
