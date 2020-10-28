#include <cstdio>
#include "Vector3d.h"
#include "Point3d.h"

int main(void)
{
	Point3d pt{4, 3, 0};
	Vector3d vec{-5, 6, 8};
	pt.print();
	vec.print();
	pt.move_by_Vector(vec);
	pt.print();
}