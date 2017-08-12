#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	Stack s;
	s.push("stack");
	s.push("a");
	s.push("is");
	s.push("This");

	cout << s;

	s.pop();

	cout << s;

	return 0;
}
