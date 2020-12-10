#include <iostream>
#include <fstream>
#include <algorithm>
#include <cctype>

using namespace std;

int simple_fout()
{
	ofstream fout("foutputf.in");
	if (!fout)
	{
		cerr << "error opening" << endl;
	}
	fout << "hello there" << endl;
	fout << "oh no" << endl;
	fout.close();
}

int simple_fin()
{
	ifstream fin("emptyfile");
	if (!fin) 
	{
		// will not come here for empty file
		cerr << "error opening during read" << endl;
	}
	while(fin)
	{
		string something;
		fin >> something; // obviously doesn't read spaces or newlines
		cout << something;
	}

}

// Ios file mode	Meaning
// app	Opens the file in append mode
// ate	Seeks to the end of the file before reading/writing
// but ate also truncates by default so it isn't useful without another mode
// binary	Opens the file in binary mode (instead of text mode)
// in	Opens the file in read mode (default for ifstream)
// out	Opens the file in write mode (default for ofstream)
// trunc	Erases the file if it already exists

// It is possible to specify multiple flags by bitwise ORing them together (using the | operator). 
// Ifstream defaults to std::ios::in file mode. 
// Ofstream defaults to std::ios::out file mode. 
// fstream defaults to std::ios::in | std::ios::out file mode



int main(int argc, char const *argv[])
{
	ofstream fout("emptyfile", ios::ate | ios:: in); // no errors thrown even using ios::in with ofstream but obviously you won't be able to read from file.
	// string something; fout >> something;
	if (!fout) cerr << "error opening in ate mode\n";	
	fout << "hello\n";
	return 0;
}