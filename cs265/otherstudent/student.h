#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>
#include <iostream>

using namespace std;

class student
{
public:
	//constructors
	student(); //default
	student(string newname = " ", string newyear = "Freshman", double newgpa = 0); //explicit
	student(const student& s);

	//accessors
	string getName();
	string getYear();
	double getGPA();

	//mutators
	void setName(string newname);
	void setYear(string newyear);
	void setGPA(double newgpa);
	void setStudent(string newname, string newyear, double newgpa);

	student operator+(const student& s);

	friend ostream& operator<<(ostream& out, const student& s);
	friend istream& operator>>(istream& in, student& s);
private:
	string name, year;
	double gpa;
};

#endif //__STUDENT_H__
