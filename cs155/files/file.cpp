#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string name;
	int id, year;
	ifstream fin("input.txt");
	if(fin.fail()){
		cout << "ERROR\n";
		exit(1);
	}

	getline(fin, name);
	cout << name << '\n';

	while(!fin.eof())
	{
		fin >> name;
		fin >> id;
		fin >> year;
		cout << name << '\t' << id << '\t' << year << '\n';
	}

	fin.close();

	return 0;
}
