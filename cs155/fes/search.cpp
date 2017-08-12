#include <iostream>

using namespace std;

int main()
{
	int array[4][3];

	for(int row = 0; row < 4; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			cout << "Please enter the number for array[" << row << "][" << col << "]: ";
			cin >> array[row][col];
		}
	}

	int num;

	cout << "Please enter a number you would like to search for: ";
	cin >> num;

	for(int row = 0; row < 4; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			if(num == array[row][col])
				cout << num << " found at position row: " << row << " col: " << col << '\n'; 
		}
	}

	return 0;
}
