#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
class Array
{
private:
	int m_size;
	T* m_arr;
public:
	Array(int size) : m_size (size)
	{
		m_arr = new T[m_size];
	}
	Array(int size, const T& value) : m_size (size)
	{
		m_arr = new T[m_size];
		for (auto i = 0; i < m_size; ++i)
			m_arr[i] = value;
	}

	// disallowing copying and assignment
	Array(Array&) = delete;
	Array& operator= (Array&) = delete;

	~Array()
	{
		delete[] m_arr;
	}
	T& operator[] (int ind)
	{
		assert (ind >= 0 and ind < m_size);
		return m_arr[ind];
	}
	friend ostream& operator<< (ostream& out, Array& mylist)
	{
		for(int i = 0; i < mylist.m_size; ++i) out << mylist[i] << " ";
		out << endl;
		return out;
	}
};

int main()
{
	int a(2);
	// Array<int> arr(5, 84);
	Array<double> arr(5, 84.9);
	cout << arr;
}
