#include <iostream>

using namespace std;

int main()
{
	//pascal triangle

	/*
	[1] [0] [0] [0] [0]
	[1] [x] [0] [0] [0]
	[1] [x] [x] [0] [0]
	[1]	[x] [x] [x] [0]
	[1] [x] [x] [x] [x]

	x = 0 + 1 == 1;
	Each element ([x][y]) = [x][y-1] + [x-1][y-1]
	*/

	const int SIZE = 6;

	int array[SIZE][SIZE];

	for(int i = 0; i < SIZE; i++)
	{
		array[i][0] = 0; //row to zero
		array[0][i] = 1; //column to one
	}

	for(int i = 1; i < SIZE; i++)
	{
		for(int j = 1; j < SIZE; j++)
		{
			array[i][j] = array[i][j-1] + array[i-1][j-1];
		}
	}

	for(int i = 0; i < SIZE; i++) //col
	{
		for(int j = 0; j < SIZE; j++) //row
		{
			cout << array[j][i] << ' ';
		}
		cout << '\n';
	}

	return 0;
}

/*
const int SIZE = 10;

int a[SIZE][SIZE];

for(int i = 0; i < SIZE; i++)
{
	for(int j = 0; j < SIZE; j++)
		a[i][j] = 1;
}

a[0][0] = 0; //first element is 0

a[SIZE-1][SIZE-1] = 2; //last element is 2

for(int i = 0; i < SIZE; i++) //col
{
	for(int j = 0; j < SIZE; j++) //row
	{
		cout << a[j][i] << ' ';
	}
	cout << '\n';
}
*/
