#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

char* string_to_charptr(string s)
{
	return const_cast<char*>(s.c_str());
}


vector<string> list_dir(string path)
{
    struct dirent *entry;
    vector<string> filenames;

    DIR *dir = opendir(string_to_charptr(path));
    if (dir == NULL) {
        return filenames;
    }

    while ((entry = readdir(dir)) != NULL) {
        if(entry->d_type != 0x04 )
        	filenames.push_back(entry->d_name);
    }

    closedir(dir);
    return filenames;
}

int main()
{
	for(auto a: list_dir("."))
		cout << a << endl;
}