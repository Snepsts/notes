#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <string>

using namespace std;

class student
{
public:
	//default constructor
	student();

	//mutator
	void setGPA(double newGPA);
	void setName(string newName);

	//accessor
	double getGPA();
	string getName();

	//overloaded operator
	friend ostream& operator<<(ostream& out, const student& s);
	friend istream& operator>>(istream& in, student& s);
private:
	double gpa;
	string name;
};

#endif //__STUDENT_H__
