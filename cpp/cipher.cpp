#include <fstream>
#include <iostream>
#include <string>

using namespace std;

bool cipher_file();
bool decipher_file();
void print_choices();

int main()
{
	bool done = false;

	do {
		int a;
		do {
			print_choices();
			cin >> a;
		} while (a > 3 || a < 1);

		switch (a) {
			case 1:
				if (cipher_file())
					cout << "Successfully ciphered your text!\n";
				else
					cout << "Something went wrong.\n";
				break;
			case 2:
				if (decipher_file())
					cout << "Successfully deciphered your text!\n";
				else
					cout << "Something went wrong.\n";
				break;
			default:
				done = true;
		}
	} while (!done);

	return 0;
}

void print_choices()
{
	cout << "What would you like to do?\n";
	cout << "1 - Cipher a file.\n";
	cout << "2 - Decipher a file.\n";
	cout << "3 - Quit.\n";
}

bool cipher_file()
{
	string file_name;
	cout << "Please enter a file name: ";
	cin >> file_name;

	ifstream fin(file_name);
	if (fin.fail())
		return false;

	string text = "";
	string buffer;
	while (getline(fin, buffer)) {
		text += buffer;
	}

	int a;
	cout << "What is your a?\n";
	cin >> a;

	for (size_t i = 0; i < text.length(); i++) {
		char c = text[i];

		if (c == ' ')
			continue;

		int j = (int)c;
		bool is_upper_case = false;
		if (isupper(c))
			is_upper_case = true;

		int value = (is_upper_case) ? 65 : 97;
		j -= value;
		j = (a + j) % 26;
		j += value;

		c = (char)j;
		text[i] = c;
	}

	ofstream fout("cipher.txt");

	if (fout.fail())
		return false;

	fout << text;

	return true;
}

bool decipher_file()
{

		string file_name;
		cout << "Please enter a file name: ";
		cin >> file_name;

		ifstream fin(file_name);
		if (fin.fail())
			return false;

		string text = "";
		string buffer;
		while (getline(fin, buffer)) {
			text += buffer;
		}

		int a;
		cout << "What is your a?\n";
		cin >> a;

		for (size_t i = 0; i < text.length(); i++) {
			char c = text[i];

			if (c == ' ')
				continue;

			int j = (int)c;
			bool is_upper_case = false;
			if (isupper(c))
				is_upper_case = true;

			int value = (is_upper_case) ? 65 : 97;
			j -= value;
			j = (j - a) % 26;
			j += value;

			c = (char)j;
			text[i] = c;
		}

		ofstream fout("decipher.txt");

		if (fout.fail())
			return false;

		fout << text;

		return true;
}
