#include "Point3d.h"
#include "Vector3d.h"

void Point3d:: move_by_Vector(const Vector3d& vec)
{
	x += vec.x;
	y += vec.y;
	z += vec.z;
}
