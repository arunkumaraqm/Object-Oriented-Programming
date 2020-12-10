#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
	stringstream mystream("yel");
	// mystream.str("hello world\n");
	mystream << 5008;
	cout << "First display: " << mystream.str() << endl;
	cout << "Second display: " << mystream.str() << endl;
	string word;
	mystream >> word;
	cout << "Extracted word: " << word << endl;
	cout << "Whole (not remaining) stream: "<< mystream.str() << endl;
	getline(mystream, word);
	cout << "Extracted word: " << word << endl;

	mystream.str(""); // erasing
	mystream.clear(); // resets error flags

	mystream << "6000 60.01";
	int i; double d;
	cout << "Display: " << mystream.str() << endl;
	mystream >> i >> d;
	cout << "Extracted integer and double: " << i << ' ' << d << endl;

	return 0;
}