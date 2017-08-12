#include <iostream>

using namespace std;

void value(int a);
void reference(int& a);

void swap(int& a, int& b);

int main()
{
	int num1 = 8;

	cout << "num1 before function value call: " << num1 << '\n';
	value(num1);
	cout << "num1 after function value call: " << num1 << '\n';

	cout << "num1 before function reference call: " << num1 << '\n';
	reference(num1);
	cout << "num1 after function reference call: " << num1 << '\n';

	return 0;
}

void value(int a)
{
	a = a + 3;
	cout << "a inside the function value is " << a << '\n';
}

void reference(int& a)
{
	a = a + 3;
	cout << "a inside the function reference is " << a << '\n';
}

void swap(int& a, int& b)
{
	int c; //temp value
	c = a; //temporarily store a
	a = b; //make a = b
	b = c; //make b = a's temporary value
}
