#include <iostream>

using std::cout;
/* The purpose of this program: to quickly show students why garbage values are
important to account for with default values (default constructors and stuff) */
int main()
{
	int a[100]; //grab 100 32-bit memory spots

	for(int i = 0; i < 100; i++) //at least one should be a garbage value.
		cout << a[i] << '\n'; //print them out

	return 0;
}
