//4. Write a C++ program to define the different types of constructors (including copy constructor) and also destructor 

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	Node(int data) : data(data) {}
	Node(int data, Node* next) : data(data), next(next) {}
};
class LinkedList
{
private:
	Node* head, *tail;
	string name;
public:
	LinkedList(string name = "") 
	{
		head = tail = nullptr; 
		this->name = name;
	}

	LinkedList(int* arr, int size, string name = "")
	{
		head = tail = nullptr; 
		this->name = name;

		for (int i = 0; i < size; ++i)
		{
			insert(arr[i]);
		}
	}
	LinkedList(const LinkedList& other, string name = "")
	{
		head = tail = nullptr;
		this->name = name;

		Node* other_cur = other.head;
		while (other_cur)
		{
			insert(other_cur->data);
			other_cur = other_cur->next;
		}
	}
	void insert(int data)
	{
		if (head == nullptr)
		{
			head = tail = new Node(data, nullptr);
		}
		else
		{
			tail->next = new Node(data, nullptr);
			tail = tail->next;
		}
		cout << name << ": " 
			 << "Inserted "<< tail->data << endl;
	}
	~LinkedList()
	{
		Node* cur = head, *temp;
		while (cur)
		{
			temp = cur;
			cur = cur->next;
			cout << name << ": ";
			cout << "Destroyed "<< temp->data << endl;
			delete temp;
		}
		head = tail = nullptr;
	}
};

int main(void)
{
	int arr[3] = {90, 80, 48};
	LinkedList li1(arr, 3, "first");
	LinkedList li2(li1, "second");
	LinkedList li3("third");
	li3.insert(65); 
}
