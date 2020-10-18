// Compiled with g++ (GCC) 7.4.0 using Cygwin
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class IErrorLog
{
public:
	virtual bool open_log(string fname) = 0;
	virtual bool close_log() = 0;
	virtual bool write_error(string msg) = 0;
	virtual ~IErrorLog() = default;
	
};

class FileErrorLog: public IErrorLog
{
	ofstream fout;
public:
	virtual bool open_log(string fname) override
	{
		fout.open(fname, ios::out);
	}
	virtual bool close_log() override
	{
		fout.close();
	}
	virtual bool write_error(string msg) override
	{
		fout << msg << endl;
	}
	virtual ~FileErrorLog() = default;
	
};

int main()
{
	FileErrorLog fel;
	fel.open_log("myerrors.txt");
	fel.write_error("It's not working!");
	fel.close_log();
}