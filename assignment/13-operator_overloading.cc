//13. Illustrate a C++ program to define the concepts operator overloading with and without
//using friend functions 

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class Vector3d
{
	double x, y, z;

public:
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

	friend Vector3d operator+(Vector3d&, Vector3d&);
};

Vector3d operator+(Vector3d& one, Vector3d& two)
{
	Vector3d summ;
	summ += one;
	summ += two;
	return summ;
}


int main(void)
{
	Vector3d vec1{-5, 6, 8}, vec2{6, 8, 3};
	vec1 += vec2;
	auto vec3 = vec1 + vec2;
	vec1.print(); vec2.print(); vec3.print();
}
