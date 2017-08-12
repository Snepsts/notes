#include <iostream>

using namespace std;

int Wow(int n, int m);

int main()
{
	cout << Wow(5, 2) << '\n';

	return 0;
}

int Wow(int n, int m)
{
	if(m == 1)
		return n;

	if(n == m)
		return 1;

	return Wow(n-1, m-1) + Wow(n-1, m);
}
