#include<iostream>
#include<string>

using namespace std;

int main()
{
	string first, last, reverse;

	string motto = "Your records are our records";
	string newmotto;

	cout << "Enter your first and last name" << endl;
	cin >> first >> last;

	reverse = last + "," + first;

	cout << "your name in our records is  " << reverse << endl;
	cout << "our motto is :" << motto << endl;
	cout << "Please suggest a new motto" << endl;

	cin.ignore();
	getline(cin, newmotto);

	cout << "Our new motto is:" << newmotto << endl;

	return 0;
}

	/*
	string infile, output1, output2, output3;
	ifstream fin;
	ofstream fout1, fout2, fout3;
	cout << "Enter input file name" << endl;
	getline(cin, infile);
	fin.open(infile);

	if (fin.fail())
	{
		cout << "fin file failed" << endl;
		exit(1);
	}

	cout << "Enter output 1 file name" << endl;
	getline(cin, output1);
	fout1.open(output1);

	if (fout1.fail())
	{
		cout << "fout1 file failed" << endl;
		exit(1);
	}

	cout << "Enter output 2 file name" << endl;
	getline(cin, output2);
	fout2.open(output2);

	if (fout2.fail())
	{
		cout << "fout2 file failed" << endl;
		exit(1);
	}

	cout << "Enter output 3 file name" << endl;
	getline(cin, output3);
	fout3.open(output3);

	if (fout3.fail())
	{
		cout << "fout3 file failed" << endl;
		exit(1);
	}

	int ID;
	string name;
	char garbage;
	double salary;

	while(fin >> ID >> name >> garbage >> salary)
	{
		fout1 << ID << endl;
		fout2 << name << endl;
		fout3 << salary << endl;
	}

	fin.close();
	fout1.close();
	fout2.close();
	fout3.close();

	fin.open(output3);


	if (fin.fail())
	{
		cout << "fin 2nd run file failed" << endl;
		exit(1);
	}

	int count = 0;
	double sum = 0;
	double next;

	while (fin >> next)
	{
		sum = sum + next;
		count++;

	}
	cout << "Average = " << sum / count << endl;

	fin.close();

	return 0;
}
*/
