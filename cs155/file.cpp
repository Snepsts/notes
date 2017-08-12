#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int id;
	string name;
	double price, num;
	ifstream fin;

	fin.open("input2.txt");
	if(fin.fail())
	{
		cerr << "File does not exist, exiting program.\n";
		return 1;
	}

	ofstream fout;

	fout.open("output2.txt");
	if(fout.fail())
	{
		cerr << "File does not exist, exiting program.\n";
		return 1;
	}

	string word1, word2, word3;
	fin >> word1 >> word2 >> word3;

	double totalprice = 0;

	fout << word1 << '\t' << word2 << '\t' << word3 << '\t' << "Amount" << '\n';

	while(!fin.eof())
	{
		fin >> id;
		fin >> name;
		fin >> price;

		cout << "Please enter how many \"" << name << "\"s you have: ";
		cin >> num;

		totalprice += num * price;

		fout << id << "\t" << name << "\t" << price << "\t" << num << '\n';
	}

	cout << "Your total price is " << totalprice << '\n';

	return 0;
}
