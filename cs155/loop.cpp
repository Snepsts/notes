#include <iostream>

using namespace std;

int main()
{
	/*
	for(int i = 1; i < 10; i++)
	{
		for(int j = 1; j < 10; j++)
		{
			cout << i * j << " ";
		}
		cout << '\n';
	}
	*/

	int a;

	cout << "How many numbers?\n";

	cin >> a;

	for(int i = a; i > 0; i--){
		for(int j = a; j > 0; j--)
			cout << j << " ";
		cout << '\n';
	}

	cout << '\n'; //newline

	return 0;
}
