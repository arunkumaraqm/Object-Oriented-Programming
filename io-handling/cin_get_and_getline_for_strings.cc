#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int strsize = 100;
	char str[strsize];
	cin.get(str, strsize, ':');
	char ch;
	for (int idx = 0; idx < strsize; ++idx) // will display a lot of junk values (intentional)
	{
		ch = str[idx];
		if (ch == '\t')
		{
			cout << " tab ";
		}
		else if (ch == ' ')
		{
			cout << " space ";
		}
		else if (ch == '\r')
		{
			cout << " carriage ";
		}
		else if (ch == '\n')
		{
			cout << " linefeed\n";
		}
		else
		{
			cout << ch;
		}
	}
	string rest_of_line;
	cin >> rest_of_line; // if rest of line is one word
	cout << '\n' << rest_of_line << endl;

	cin.getline(str, strsize, ':');
	// char ch;
	for (int idx = 0; idx < strsize; ++idx)
	{
		ch = str[idx];
		if (ch == '\t')
		{
			cout << " tab ";
		}
		else if (ch == ' ')
		{
			cout << " space ";
		}
		else if (ch == '\r')
		{
			cout << " carriage ";
		}
		else if (ch == '\n')
		{
			cout << " linefeed\n";
		}
		else
		{
			cout << ch;
		}
	}
	// string rest_of_line;
	cin >> rest_of_line;
	cout << '\n' << rest_of_line << endl;

	return 0;
}