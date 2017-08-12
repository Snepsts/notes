#include <iostream>

using namespace std;

void calluntil9(int a);
int fibonacci(int n);

int main()
{
	int n = 20;

	cout << "The fibonacci of " << n << " is: " << fibonacci(n) << '\n';

	return 0;
}

void calluntil9(int a)
{
	//final case
	if(a == 9)
		cout << "a is now nine.\n";
	else if (a < 9)
	{
		cout << "a is: " << a << '\n';
		calluntil9(a+1);
	}
	else //a > 9
	{
		cout << "a is: " << a << '\n';
		calluntil9(a-1);
	}
}

int fibonacci(int n)
{
	//if it's invalid
	if (n <= 0)
		return 0;
	//fibonacci seq of 1 is 1, also final case
	if (n == 1)
		return 1;
	//base case
	if (n > 1)
		return fibonacci(n-1) + fibonacci(n-2);
}
