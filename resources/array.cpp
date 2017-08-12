#include <iostream> //cout

using namespace std;

/*Brief introduction to arrays:
We can declare one int like this: int a;
We can declare two ints like this: int a, b;
...but what if we need to declare 100 ints?
We can do that with this: int a[100]
*/

int main()
{
	int a[100]; //a has 100 members, all are ints.
	a[0] = 1; //this is how we access the first member of a
	a[99] = 100; //this is how we access the 100th member of a

	/* The following for loop is how we access all 100 members of a in a few
	lines of code. For loops are perfect for arrays because the counter (i) can
	also be used as the array accessor (a[i]). This will quickly and efficiently
	access the entire array. */

	for(int i = 0; i < 100 /*i will stop at 99*/; i++)
		a[i] = i + 1; //this will make a[0] = 1, a[1] = 2, a[2] = 3, ...
		              //a[98] = 99, a[99] = 100;

	cout << "Here is our whole array: \n";

	for(int i = 0; i < 100; i++)
		cout << a[i] << '\n'; //print out the whole array

	return 0; //end main
}
