#include <iostream>

using namespace std;

int avg(int a, int b);
void avg2(int a, int b);

int main()
{
	int a;
	int b = 4;
	a = b;
	cout << a;
	a = avg(1, 2);
	cout << a;
	a = b / 2;
	cout << a;
	a = avg(1, 2) / 2;
	cout << a;

	return 0;
}

int avg(int a, int b)
{
	return (a + b) / 2;
}

void avg2(int a, int b)
{
	cout << (a + b) / 2 << endl;
}
