#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>

using namespace std;

const int STACK_CAPACITY = 128;
typedef string StackElement;

class Stack
{
public:
	//constructor
	Stack(); //default

	//tell us if it's empty
	bool empty() const;

	//adds something to stack
	void push(const StackElement& value);

	//don't use this
	void display(ostream& out) const;

	//accessor
	StackElement top() const;

	//remove top element
	void pop();

	//output stack
	friend ostream& operator<<(ostream &out, const Stack& s);

private:
	StackElement myArray[STACK_CAPACITY];
	int myTop;
};

inline Stack::Stack()
{
	myTop = -1;
}

inline bool Stack::empty() const
{
	return (myTop == -1);
}

#endif //__STACK_H__
