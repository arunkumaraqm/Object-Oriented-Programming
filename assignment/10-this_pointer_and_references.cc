/*
10. Write a C++ program to include the concept of this pointer and references 
*/

#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

class ComplexNumber
{
public:
	float real;
	float imag;

	ComplexNumber& increment_by(float real) {this->real += real; return *this;}
	ComplexNumber& decrement_by(float real) {this->real -= real; return *this;}
	ComplexNumber& scaleup_by(float real) {this->real *= real; return *this;}

};
void print_complex_number(ComplexNumber& cx)
{
	printf("(%.2f + %.2fi)\n", cx.real, cx.imag);
}
int main()
{
	ComplexNumber cx{89, 54};
	print_complex_number(cx);
	print_complex_number(
		cx.increment_by(-88)
		  .decrement_by(2)
		  .scaleup_by(10)
		);
}
