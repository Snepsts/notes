#ifndef __MY_CLASS_H__
#define __MY_CLASS_H__

#include <iostream>
#include <sstream>

using namespace std;

class my_class
{
public:
	my_class() { i = 0; c = 'z'; }
	my_class(int i, char c) { this->i = i; this->c = c; }
	void set_i(int i_s) { i = i_s; }
	int get_i() { return i; }
	friend ostream& operator<<(ostream& out, const my_class& mc);
	friend istream& operator>>(istream& in, my_class& mc);
private:
	int i;
	char c;
};

ostream& operator<<(ostream& out, const my_class& mc)
{
	out << mc.c << "'s balance is " << mc.i << '\n';

	return out;
}

istream& operator>>(istream& in, my_class& mc)
{
	cout << "Please enter i: ";
	in >> mc.i;
	cout << "Please enter c: ";
	in >> mc.c;

	return in;
}

#endif //__MY_CLASS_H__
