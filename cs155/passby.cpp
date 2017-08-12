#include <iostream>

using namespace std;

void add3toa(int a); //pass by value
void add3tob(int& b); //pass by reference

int main()
{
	int a = 5;
	int b = 7;

	//pass by value
	cout << "This is a in main before add3toa: " << a << '\n';

	add3toa(a);

	cout << "This is a in main after add3toa: " << a << '\n';

	/*Notice a is still 5, when we call the function, it makes it's own copy of
	a. So all changes to a are only relevent in the function itself. When we come
	back to main, we no longer have that local copy, so our a is untouched. */

	//pass by reference
	cout << "This is b in main before add3tob: " << b << '\n';

	add3tob(b);

	cout << "This is b in main after add3tob: " << b << '\n';

	/* Notice b is now 10 even after the function, this is because we pass by
	reference, so it doesn't just make a copy, it takes the actual value, and
	all changes are permanant. */

	return 0;
}

void add3toa(int a)
{
	a += 3;
	cout << "This is a from the function: " << a << '\n';
}

void add3tob(int& b)
{
	b += 3;
	cout << "This is b from the function: " << b << '\n';
}
