#include "student.h"
#include <string>
#include <iostream>

using namespace std;

//constructors
student::student() //default
{
	name = " "; year = "Freshman"; gpa = 0;
}


student::student(string newname, string newyear, double newgpa)
{
	name = newname; year = newyear; gpa = newgpa;
}

student::student(const student& s)
{
	name = s.name;
	year = s.year;
	gpa = s.gpa;
}

//accessors
string student::getName()
{
	return name;
}

string student::getYear()
{
	return year;
}

double student::getGPA()
{
	return gpa;
}

//mutators
void student::setName(string newname)
{
	name = newname;
}

void student::setYear(string newyear)
{
	year = newyear;
}

void student::setGPA(double newgpa)
{
	gpa = newgpa;
}

void student::setStudent(string newname, string newyear, double newgpa)
{
	name = newname; year = newyear; gpa = newgpa;
}

student student::operator+(const student& s)
{
	student r;

	r.name = name + " " + s.name;

	if(year == "Senior")
		r.year = year;
	else if(s.year == "Senior")
		r.year = s.year;
	else if(s.year == "Junior")
		r.year = s.year;
	else if(year == "Junior")
		r.year = year;
	else if(year == "Sophomore")
		r.year = year;
	else if(s.year == "Sophomore")
		r.year = s.year;
	else
		r.year = "Freshman";

	if(gpa > s.gpa)
		r.gpa = gpa;
	else
		r.gpa = s.gpa;

	return r;
}

ostream& operator<<(ostream& out, const student& s)
{
	out << "Name: " << s.name << '\n';
	out << "GPA: " << s.gpa << '\n';
	out << "Year: " << s.year << '\n';

	return out;
}

istream& operator>>(istream& in, student& s)
{
	cout << "Please enter a name: ";
	in >> s.name;
	cout << "Please enter a year: ";
	in >> s.year;
	cout << "Please enter a GPA: ";
	in >> s.gpa;

	return in;
}
