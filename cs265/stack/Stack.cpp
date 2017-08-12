#include "Stack.h"
#include <iostream>

using namespace std;

void Stack::push(const StackElement& value)
{
	if(myTop >= STACK_CAPACITY - 1) //if it's full
		cerr << "Stack is full\n";
	else
	{
		myTop++;
		myArray[myTop] = value;
	}
}

void Stack::display(ostream& out) const
{
	//Don't actually need it
}

StackElement Stack::top() const
{
	if(empty()) //if it's empty
	{
		cerr << "Stack is empty\n";
		StackElement garbage;
		return garbage;
	}
	else
		return (myArray[myTop]);
}

void Stack::pop()
{
	if(empty()) //if it's empty
		cerr << "Stack is empty\n";
	else
		myTop--;
}

ostream& operator<<(ostream &out, const Stack& s)
{
	for(int i = s.myTop; i >= 0; i--)
		out << s.myArray[i] << '\n';

	return out;
}
