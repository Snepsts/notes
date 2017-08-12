#include <iostream>

using namespace std;

int main()
{
	int a = 2;

	if(true)
	{
		int b = new int;

		b = &a;

		cout << *b << '\n';
	}

	return 0;
}
