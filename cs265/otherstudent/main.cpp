#include <iostream>
#include "student.h"

using namespace std;

int main()
{
	student a("Michael", "Junior", 2.3);

	student b;

	cin >> b; //input b

	student c = a + b; //add them together

	cout << c; //cout our added together student

	return 0; //end main
}
