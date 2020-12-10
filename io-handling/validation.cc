#include <iostream>
#include <cassert>
#include <algorithm>
#include <cctype>

using namespace std;

bool is_valid_name(string& name)
{
	return all_of(name.begin(), name.end(), [](char ch){
		return isalpha(ch) or isspace(ch);
	});
}

int main(int argc, char const *argv[])
{
	string s("Hi world 		police");
	assert(is_valid_name(s) == true);
	string t("Hi world 	89	police");
	assert(is_valid_name(t) == false);
}