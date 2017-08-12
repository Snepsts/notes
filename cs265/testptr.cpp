#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Enter number of values: ";
	cin >> n;
	double *doublePtr = new double[n];

	for(int i = 0; i < n; i++)
	{
		cout << "Enter value: ";
		//cin >> *(doublePtr + i);
		cin >> doublePtr[i];
	}

	for(int i = 0; i < n; i++)
	{
		cout << "Value #" << i+1 << ": " << &doublePtr[i] << '\n';
	}

	int sum = 0;

	for(int i = 0; i < n; i++)
	{
		sum += doublePtr[i];
	}

	cout << "Average is: " << sum / n << '\n';

	delete[] doublePtr;

	return 0;
}
