#include <iostream>

using namespace std;

int F(int n);

int main()
{
	int i = F(3);

	cout << endl;

	return 0;
}

int F(int n)
{
	int result;

	if(n > 20)
		return 1;
	else
	{
		result = F(2*n) * 2;
		cout << result << " ";
		return result;
	}
}
