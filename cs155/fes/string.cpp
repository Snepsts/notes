#include <iostream>

using namespace std;

int cstring_count(char c[]);

int main()
{
	char cstring[6];
	cstring[0] = 'J';
	cstring[1] = 'o';
	cstring[2] = 'n';
	cstring[3] = 'n';
	cstring[4] = 'y';
	cstring[5] = '\0'; //Will always have a null char '\0'

	cout << cstring << " has " << cstring_count(cstring) << " chars.\n";

	char replace;

	cout << "Please enter a letter to replace with w in " << cstring << '\n';
	cin >> replace;

	for(int i = 0; i < 6; i++)
	{
		if(cstring[i] == replace)
			cstring[i] = 'w';
	}

	cout << "The new string is: " << cstring << '\n';

	char Delete;

	cout << "Please enter the character to delete in " << cstring << ": ";
	cin >> Delete;

	int index;
	for(index = 0; cstring[index] != '\0'; index++)
	{
		cout << "Comparing " << cstring[index] << " to " << Delete << '\n';
		if(cstring[index] == Delete)
		{
			cout << "Found the delete char!\n";
			break;
		}
	}

	for(int i = index; cstring[i] != '\0'; i++)
	{
		cstring[i] = cstring[i+1];
	}

	cout << "New cstring: " << cstring << '\n';

	return 0;
}

int cstring_count(char c[])
{
	int i = 0;
	int count = 0;

	while(c[i] != '\0')
	{
		i++;
		count++;
	}

	return count;
}
