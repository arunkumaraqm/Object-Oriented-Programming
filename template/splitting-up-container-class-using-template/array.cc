#include "array.h"
#include <iostream>
#include <cassert>
using namespace std;

template class Array<double>; // explicit instantiation

template <typename T>
Array<T>:: get_length()
{
	return m_size;
}
