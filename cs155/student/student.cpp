#include "student.h"
#include <iostream>
#include <string>

using namespace std;

student::student()
{
	gpa = 0;
	name = " ";
}

void student::setGPA(double newGPA)
{
	gpa = newGPA;
}

double student::getGPA()
{
	return gpa;
}

void student::setName(string newName)
{
	name = newName;
}

string student::getName()
{
	return name;
}

ostream& operator<<(ostream& out, const student& s)
{
	out << "Name: " << s.name << '\n';
	out << "GPA: " << s.gpa << '\n';

	return out;
}

istream& operator>>(istream& in, student& s)
{
	cout << "Please enter a name: ";
	getline(in, s.name);
	cout << "Please enter a GPA: ";
	in >> s.gpa;

	return in;
}
