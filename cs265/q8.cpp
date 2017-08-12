#include <iostream>

using namespace std;

int summation(int a[], int size, int pos = 0);
int sum(int a[], int first, int last);

int main()
{
	int array[10];

	for(int i = 0; i < 10; i++)
		array[i] = i + 1;

	cout << summation(array, 10) << '\n';

	cout << sum(array, 0, 9) << '\n';

	return 0;
}

int summation(int a[], int size, int pos)
{
	if(pos < size - 1)
	{
		return a[pos] + summation(a, size, pos + 1);
	}
	else
		return a[pos];
}

int sum(int a[], int first, int last)
{
	if(first > last)
		return 0;
	else
		return(a[first] + sum(a, first+1, last));
}
