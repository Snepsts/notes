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
	name = s.name; year = s.year; gpa = s.gpa;
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

	if(year == "Senior" || s.year == "Senior")
		r.year = "Senior";
	else if(s.year == "Junior" || year == "Junior")
		r.year = "Junior";
	else if(year == "Sophomore" || s.year == "Sophomore")
		r.year = "Sophomore";
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

/*
#include "student.h"
#include <string>
#include <iostream>

using namespace std;

student::student()
{
	name = " "; gpa = 0; year = "Freshman";
}

student::student(string newname, string newyear, double newgpa)
{
	name = newname; gpa = newgpa; year = newyear;
}

void student::setName(string newname)
{
	name = newname;
}

void student::setGPA(double newgpa)
{
	gpa = newgpa;
}

void student::setYear(string newyear)
{
	year = newyear;
}

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

ostream& operator<<(ostream& out, const student& s)
{
	out << "Name: " << s.name << '\n';
	out << "Year: " << s.year << '\n';
	out << "GPA: " << s.gpa << '\n';

	return out;
}

istream& operator>>(istream& in, student& s)
{
	cout << "Please enter a name: ";
	in >> s.name;
	cout << "Please enter a year: ";
	in >> s.year;
	cout << "Please enter a gpa: ";
	in >> s.gpa;

	return in;
}

#include "student.h"
#include <string>
#include <iostream>

using namespace std;

student::student()
{
	name = " "; gpa = 0; y = Freshman;
}

student::student(const string& name, const double& gpa, const year& y)
{
	this->name = name; this->gpa = gpa; this->y = y;
}

void student::setName(const string& name)
{
	this->name = name;
}

void student::setGPA(const double& gpa)
{
	this->gpa = gpa;
}

void student::setYear(const year& y)
{
	this->y = y;
}

string student::getName() const
{
	return name;
}

double student::getGPA() const
{
	return gpa;
}

string student::getYear() const
{
	switch (y) {
		case Freshman:
			return "Freshman";
			break;
		case Sophomore:
			return "Sophomore";
			break;
		case Junior:
			return "Junior";
			break;
		case Senior:
			return "Senior";
			break;
		default:
			return "Freshman";
			break;
	}
}

ostream& operator<<(ostream& out, const student& s)
{
	out << "Name: " << s.name << '\n';
	out << "GPA: " << s.gpa << '\n';
	out << "Year: " << s.getYear() << '\n';

	return out;
}

istream& operator>>(istream& in, student& s)
{
	int a;

	cout << "Please enter a name: ";
	in >> s.name;
	cout << "Please enter a GPA: ";
	in >> s.gpa;
	cout << "Please enter:\n0 - Freshman\n1 - Sophomore\n2 - Junior\n3 - Senior\n";
	in >> a;

	switch (a) {
		case 0:
			s.y = Freshman;
			break;
		case 1:
			s.y = Sophomore;
			break;
		case 2:
			s.y = Junior;
			break;
		case 3:
			s.y = Senior;
			break;
		default:
			s.y = Freshman;
			break;
	}

	return in;
}

void student::operator=(const student& s)
{
	this->name = s.name; this-> gpa = s.gpa; this->y = s.y;
}

*/
