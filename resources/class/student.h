/* Header guards:
Directly below me you'll see an #ifndef and #define
This is called a "header guard". A header guard allows us to include a header
in multiple files (in this case, student.cpp and main.cpp) without having
compiler errors. The header ensures the compiler will only "see" the class once,
and thuse no "multiple definitions" errors will occur.
*/

#ifndef __STUDENT_H__ //begin header guard
#define __STUDENT_H__ //define

#include <string>
#include <iostream>

using namespace std;

/* Brief introduction to classes:
Classes are a core concept of C++. These are what makes C++ an "object oriented"
programming language. A class is an object. In this case, we're going to make a
student object. When we make a class student, we can do:
student a; //creates a student called "a"
just like how we can do:
int a; //creates an integer called "a"
Classes have some core components we should always write:
 - Constructors
 - Accessors
 - Mutators
These three things are how we'll start our class. Please follow allong within
the comments. Also, I added a makefile for those on Linux. You can just type
make
in the directory locating these files and your student.out will be generated
automatically. Let's get started. */

class student //begin class definition
{
public:
	//PART 1:

	/* In part 1, we will define our bare minimum for a class.
	Our default constructor, basic accessors and basic mutators. */

	//constructors
	student(); //default

	//accessors
	string getName();
	string getYear();
	double getGPA();

	//mutators
	void setName(string newname);
	void setYear(string newyear);
	void setGPA(double newgpa);

	/* You can go to student.cpp to see more on each set of these and view
	their code and explanations. */

	//END PART 1
	//Go to main.cpp and view the part 1 in there.

	//PART 2:
	//mutators
	void setStudent(string newname, string newyear, double newgpa);

	//constructors
	student(string newname, string newyear, double newgpa); //explicit

	/* You can go to student.cpp to see more on the both of these and view their
	code and explanations. */

	//END PART 2
	//Go to main.cpp and view the part 2 in there.

	//PART 3:
	//Overloaded friend operators
	friend ostream& operator<<(ostream& out, const student& s);
	friend istream& operator>>(istream& in, student& s);

	/* NOTE ABOUT FRIEND functions
	friend functions are not actually apart of student (as such, you'll notice
	there is no student:: scope on it.) The friend keyword allows functions to
	access private student variables that it takes as arguments or defines in
	it's body. As such both of these functions will be able to access s.name,
	s.year and s.gpa.
	You also only use the friend keyword in a class, not while you're actually
	writing the function. */

	//Overloaded member operator
	student operator+(const student& s);

	//constructors
	student(const student& s); //copy constructor

	/* You should go to student.cpp to see more on each of these and view their
	code and explanations. */

	//END PART 3
	//Go to main.cpp
private:
	string name, year;
	double gpa;
}; //REMEMBER A CLASS DEFINITION MUST END WITH A SEMI-COLON

//below me is the end to the header guard
#endif //__STUDENT_H__
