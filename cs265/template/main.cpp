#include "template.h"
#include <iostream>

using namespace std;

int main()
{
	storage<int> si(1, 2, 3, 4, 5);
	storage<char> sc('a', 'b', 'c', 'd', 'e');

	si.printarray();

	return 0;
}
