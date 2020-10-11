//11. Explain with a C++ program the concepts of dynamic memory allocation along with
// function overloading features. 

#include <iostream>
#include <cstdio>
#include <new>
#include <vector>
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

	static Node* create_new_node(int data)
	{
		try {Node* temp = new Node(data, nullptr);}
		catch (bad_alloc& ba)
		{
			cerr << "Dynamic memory allocation failed.\n";
		}
	}

	void append(int data)
	{
		if (head == nullptr)
		{
			head = tail = create_new_node(data);
		}
		else
		{
			tail->next = create_new_node(data);
			tail = tail->next;
		}
		// cout << name << ": " 
		// 	 << "Inserted "<< tail->data << endl;
	}

	void append(vector<int> datas)
	{
		for (auto data: datas) append(data);
	}

	void display()
	{
		for (Node* cur = head; cur != nullptr; cur = cur->next)
		{
			cout << cur->data << ' ';
		}
		cout << endl;
	}

	~LinkedList()
	{
		Node* cur = head, *temp;
		while (cur)
		{
			temp = cur;
			cur = cur->next;
			// cout << name << ": ";
			// cout << "Destroyed "<< temp->data << endl;
			delete temp;
		}
		head = tail = nullptr;
	}
};

int main(void)
{
	vector<int> arr = {5, 3, 2};
	LinkedList li1("first");
	li1.append(65); 
	li1.append(arr);
	li1.display();
}
