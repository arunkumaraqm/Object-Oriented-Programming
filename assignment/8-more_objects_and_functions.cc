/*
8. Write a C++ program to show how to pass the objects to function, returning objects.
Define the constructor and destructor outside the class. 
*/

#include <iostream>
#include <cassert>

using namespace std;

class SquareMatrix
{
	static const int MAX_ROWS = 10;
	int rows;
	int mat[MAX_ROWS][MAX_ROWS];

public:
	SquareMatrix(int rows, int scalar = 0);
	~SquareMatrix();
	friend SquareMatrix unit_matrix(int rows);
	friend int sum_of_all_elements(SquareMatrix& obj);
	void display() const;
};

SquareMatrix:: SquareMatrix(int rows, int scalar)
{
	assert(rows < MAX_ROWS);
	cout << "constructor called\n";
	this->rows = rows;
	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < rows; ++j)
		{
			mat[i][j] = scalar;
		}
}

SquareMatrix:: ~SquareMatrix()
{
	// an explicit destructor isn't actually required here
	cout << "destructor called\n";	
}

void SquareMatrix:: display() const
{
	for (int i = 0; i < rows; ++i, cout << endl)
		for (int j = 0; j < rows; ++j)
		{
			cout << mat[i][j] << ' ';
		}
	cout << endl;
}

int sum_of_all_elements(SquareMatrix& obj)
{
	int summ = 0;
	for (int i = 0; i < obj.rows; ++i)
		for (int j = 0; j < obj.rows; ++j)
		{
			summ += obj.mat[i][j];
		}
	return summ;
}

SquareMatrix unit_matrix(int rows)
{
	SquareMatrix obj(rows);
	for (int i = 0; i < rows; ++i)
		obj.mat[i][i] = 1;
	return obj;
}

int main()
{
	SquareMatrix mymat(3, 50);
	mymat.display();
	cout << sum_of_all_elements(mymat) << "\n\n";
	unit_matrix(4).display();

}
