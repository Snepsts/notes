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
	student(string newname, string newyear, double newgpa); //explicit
	student(const student& s); //copy

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

/*
#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>

using namespace std;

class student
{
public:
	//constructors
	student(); //default
	student(string newname, string newyear, double newgpa); //explicit

	//mutators
	void setName(string newname);
	void setYear(string newyear);
	void setGPA(double newgpa);

	//accessors
	string getName();
	string getYear();
	double getGPA();

	//overloaded operators
	friend ostream& operator<<(ostream& out, const student& s);
	friend istream& operator>>(istream& in, student& s);

private:
	string name;
	string year;
	double gpa;
};

#endif //__STUDENT_H__

#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>
#include <iostream>

using namespace std;

enum year { Freshman, Sophomore, Junior, Senior };

class student{
public:
	//default constructor
	student();

	//explicit constructor
	student(const string& name, const double& gpa, const year& y);

	//mutators
	void setName(const string& name);
	void setGPA(const double& gpa);
	void setYear(const year& y);

	//accessors
	string getName() const;
	double getGPA() const;
	string getYear() const;

	//overloaded operators
	void operator=(const student& s);
	friend ostream& operator<<(ostream& out, const student& s);
	friend istream& operator>>(istream& in, student& s);

private:
	string name;
	double gpa;
	year y;
};

#endif //__STUDENT_H__
*/
