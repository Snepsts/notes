#include <iostream> //cin and cout
#include <string> //name and year
#include "student.h" //student (the reason for this file)

using namespace std;

/* Introduction to main or driver programs:
The "driver" or main.cpp should have our int main() and be the part of our
program that runs everything. Our goal is to make it as straight forward as
possible. The less code in it, the better. This is a part of "modular design"
that comes with object oriented (and some other types of) programming */

int main()
{
	string name, year;
	double gpa;

	//PART 1:
	student a; //create a student called "a"

	cout << "Please enter your first student:\n";
	//get user input for the student
	cout << "Please enter a name: ";
	cin >> name;
	cout << "Please enter a year: ";
	cin >> year;
	cout << "Please enter a GPA: ";
	cin >> gpa;

	//set the student with our mutators
	a.setName(name);
	a.setYear(year);
	a.setGPA(gpa);

	cout << "Here is your student:\n";
	//print out the student info with our accessors
	cout << "Name: " << a.getName() << '\n';
	cout << "Year: " << a.getYear() << '\n';
	cout << "GPA: " << a.getGPA() << '\n';

	//END PART 1
	//Go back to student.h

	//PART 2:
	cout << "Please enter your second student:\n";
	//Get user input again
	cout << "Please enter a name: ";
	cin >> name;
	cout << "Please enter a year: ";
	cin >> year;
	cout << "Please enter a GPA: ";
	cin >> gpa;

	a.setStudent(name, year, gpa); //use our new mutator to set the members of a

	cout << "Name: " << a.getName() << '\n';
	cout << "Year: " << a.getYear() << '\n';
	cout << "GPA: " << a.getGPA() << '\n';

	student b(name, year, gpa); //use our explicit constructor for b

	cout << "Name: " << b.getName() << '\n';
	cout << "Year: " << b.getYear() << '\n';
	cout << "GPA: " << b.getGPA() << '\n';

	//When you view the output, they should both be the same

	//END PART 2
	//Go back to student.h

	//PART 3:

	student d;

	cout << "Please create a new student:\n";
	cin >> d; //input d

	student e(d); //copy constructor

	cout << "Here is your student:\n";
	cout << e; //output e

	cout << "Please create another student:\n";
	cin >> e; //get new input for e

	cout << "Here is your student:\n";
	cout << e; //output e again

	student f = d + e; //make a new f the combination of d and e

	cout << "This is a combination of your two students:\n";
	cout << f; //output our new student

	//END PART 3

	//Try running the program :)

	return 0; //end main
}
