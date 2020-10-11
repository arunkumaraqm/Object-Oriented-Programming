//14. Write a C++ program to define operator overloading and pointer to functions 

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class Vector3d
{
public:
	double x, y, z;

	Vector3d(double x = 0, double y = 0, double z = 0)
	: x(x), y(y), z(z) { }

	void print()
	{
		printf("Vec(%lf %lf %lf)\n", x, y, z);
	}

	void operator+=(Vector3d& other)
	{
		x += other.x;
		y += other.y;
		z += other.z;
	}	
};

double find_magnitude_of_a_Vector3d_object(Vector3d& v)
{
	return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}


int main(void)
{
	Vector3d vec1{-5, 6, 8}, vec2{6, 8, 3};
	vec1 += vec2;

	double (*magnitude)(Vector3d&) = find_magnitude_of_a_Vector3d_object;

	vec1.print(); vec2.print();
	cout << magnitude(vec1) << ' '<< magnitude(vec2);
}
