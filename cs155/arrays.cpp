#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int array[10]; //array of 10 elements

	//set the first element
	array[0] = 0;

	//set the other elements
	for(int i = 1; i < 10; i++)
		array[i] = 1;

	//set the last element
	array[9] = 2; //notice how it's a 9 and not a 10, despite there being 10 members
	//this is because the index starts at 0, and not 1.
	//0-9 instead of 1-10

	//print out the elements
	for(int i = 0; i < 10; i++)
		cout << array[i] << ' ';

	cout << "\n\n\n";

	const int SIZE = 1000;

	int newArray[SIZE]; //set our array of SIZE elements (20, in this case)

	for(int i = 0; i < SIZE; i++) //fill the array
		newArray[i] = i + 1;

	newArray[SIZE-1] = 0; //set the last element to 0

	for(int i = 0; i < SIZE; i++) //print the array
		cout << newArray[i] << ' ';

	cout << "\n\n\n";
/*
	srand(time(0)); //seed the rand function
	int multiDimArray[3][3]; //create a 3x3 multi dimensional array

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			multiDimArray[i][j] = rand() % 10 + 1; //random number between 1-10
		}
	}

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << "multiDimArray[" << i << "][" << j << "] = " << multiDimArray[i][j] << '\n';
		}
	}
*/
	return 0;
}
