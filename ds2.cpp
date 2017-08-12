#include <iostream>

using namespace std;

double power(double x, int n);

int main()
{
	double x;
	int n;
	cout << "Please enter the number you want: ";
	cin >> x;
	cout << "Please enter the power you want to raise said number to: ";
	cin >> n;

	cout << "The result is: " << power(x, n) << '\n';

	return 0;
}

double power(double x, int n)
{
	double r = 1.0;

	n = (n < 0) ? 0 : n;

	while(n > 0)
	{
		if(n & 1)
			r = x * r;

		x = x * x;
		n >>= 1;
	}

return r;
}
