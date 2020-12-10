#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	while(cin.get(ch))
	{
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

	return 0;
}