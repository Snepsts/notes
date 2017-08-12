#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int a;

	//ifstream -- must have a pre-existing file
	ifstream fin;

	fin.open("input.txt");
	if(fin.fail())
	{
		cerr << "File failed to open, exiting program.\n";
		return 1;
	}

	/* Second way:
	string file = "input.txt";
	fin.open(file);
	*/

	//ofstream -- doesn't need a pre-existing file
	ofstream fout;

	fout.open("output.txt");
	if(fout.fail())
	{
		cerr << "File failed to open, exiting program.\n";
		return 1;
	}

	while(fin >> a)
	{
		fout << a << " ";
	}

	return 0;
}
