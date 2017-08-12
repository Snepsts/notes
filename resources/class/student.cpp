#include "student.h" //The entire reason this file exists
#include <string> //name and year
#include <iostream> //ostream, istream, and cout

using namespace std;

/* Brief introduction to implementation files:
We declare student's functions in student.h. But here, we actually define them,
say what they do and stuff. Before each function belonging to student is
defined, we must remember to put them in the "scope" of student. For example:
The function string getName();
Has to be written as:
string student::getName();
the student:: is the "scope" and tells the compiler "Hey, this is a member of
student."
We make separate implementation files from the header to:
 - Reduce overhead
 - Have cleaner and more organized code
 - Optimize compile times for big projects

Please follow along in the order I have mentioned (the different "part"s) */

//PART 1:

//constructors

/* Constructors are called upon creation of an object. There are several types
but we'll just look at the default constructor for now. */

/* default constructor
This is our "constructor" that is called when we define a student by default.
In other words, when we do:
student a; //create a student called "a"
a's members will be initialized to whatever you set them to in the default
constructor. In our case, we make a's name " ", year a Freshman, and gpa 0. */

student::student() //default
{
	name = " "; year = "Freshman"; gpa = 0;
}

//accessors

/* Accessors are basically just a way to see our private variables (which a
proper class in C++ should only have private members (or protected)). They're
very simple and should just consist of a return statement. */

/* function getName()
This is our name accessor. It will allow us to retrieve the name of the student
without infringing on the student's privacy.
All accessors should return the item at hand and that's it. So in this case,
we return name. */

string student::getName()
{
	return name;
}

/* function getYear()
This is our year accessor. It will allow us to retrieve the year of the student
without infringing on the student's privacy.
All accessors should return the item at hand and that's it. So in this case,
we return year. */

string student::getYear()
{
	return year;
}

/* function getGPA()
This is our gpa accessor. It will allow us to retrieve the gpa of the student
without infringing on the student's privacy.
All accessors should return the item at hand and that's it. So in this case,
we return gpa. */

double student::getGPA()
{
	return gpa;
}

//mutators

/* Mutators are exactly what they sound like. They allow us to "mutate" an
object. In this case, our student. They should take the arguments of the same
type as the members they wish to change and then change said members. */

/* function setName()
This is our name mutator. It will allow us to change a student's name properly.
It should take an argument of the same type as the item being mutated. So in
this case, a string. Afterwards it should make the current name into the
"newname". (hint hint name = newname;) */

void student::setName(string newname)
{
	name = newname;
}

/* function setYear()
This is our year mutator. It will allow us to change a student's year properly.
It should take an argument of the same type as the item being mutated. So in
this case, a string. Afterwards it should make the current year into the
"newyear". (hint hint year = newyear;) */

void student::setYear(string newyear)
{
	year = newyear;
}

/* function setGPA()
This is our GPA mutator. It will allow us to change a student's GPA properly.
It should take an argument of the same type as the item being mutated. So in
this case, a double. Afterwards it should make the current GPA into the
"newgpa". (hint hint gpa = newgpa;) */

void student::setGPA(double newgpa)
{
	gpa = newgpa;
}

//END PART 1
//Go back to student.h

//PART 2:

/* function setStudent()
This is our all-in-one mutator. It takes all three variables and sets them all
as well. We can reduce three function calls to one if we wish to set the entire
student in one go! */

void student::setStudent(string newname, string newyear, double newgpa)
{
	name = newname; year = newyear; gpa = newgpa;
}

/* explicit constructor
This is our explicit constructor, it will allow us to set all of student's
members to our desired values at creation time. Notice how similar it is to our
"all-in-one" mutator, setStudent. This will be even faster because it's called
on creation of the student. */

student::student(string newname, string newyear, double newgpa)
{
	name = newname; year = newyear; gpa = newgpa;
}

//END PART 2
//Go back to student.h

//PART 3:

/* overloaded operator <<
Notice how there is no friend before this one.
ostream is our output stream type. cout and ofstream files are also ostream and
therefore compatible with this operator.
This allows us to do
student a; //create a student called "a"
cout << a; //output the student
and it will output whatever "out" takes in this function.
As such, I always recommend treating these the way you would your cout.

Keep in mind, this method modifies the ostream type named out, and then returns
it. Always remember to return it. */

ostream& operator<<(ostream& out, const student& s)
{
	/* How would we want to see it in main with cout?
	cout << "Name: " << s.getName() << '\n';
	cout << "Year: " << s.getYear() << '\n';
	cout << "GPA: " << s.getGPA() << '\n';
	Cool, let's make that useful in our function. */

	out << "Name: " << s.name << '\n';
	out << "GPA: " << s.gpa << '\n';
	out << "Year: " << s.year << '\n';

	return out; //return the output stream we've modified.
}

/* If we do cout << s; ...it should output:
Name: <s.name>
GPA: <s.gpa>
Year: <s.year> */

/* overloaded operator >>
Notice how there is no friend before this one.
istream is our input stream type. cin and ifstream files are also istream and
therefore compatible with this operator.
This allows us to do
student a; //create a student called "a"
cin >> a; //get user input for the student's variables
and it will input whatever "in" gives us in this function.
As such, I always recommend treating these the way you would your cin.

Keep in mind, this method modifies the istream type named in, and then returns
it. Always remember to return it. */

istream& operator>>(istream& in, student& s)
{
	/* How would we want to see it in main with cin?
	cout << "Please enter a name: ";
	cin >> name;
	cout << "Please enter a year: ";
	cin >> year;
	cout << "Please enter a GPA: ";
	cin >> gpa;
	Cool, let's make that useful in our function. */

	cout << "Please enter a name: ";
	in >> s.name;
	cout << "Please enter a year: ";
	in >> s.year;
	cout << "Please enter a GPA: ";
	in >> s.gpa;

	return in; //return the input stream we've modified
}

/* If we do cin >> s; ...it should output:
Please enter a name: <user input>
Please enter a year: <user input>
Please enter a GPA: <user input>

Keep in mind if you use this with files, it will still cout. I suggest keeping
a tab on what you're using it for. If it's for cin, use these cout statements,
otherwise don't. */

/* overloaded operator +
Notice how this actually has a student::
That is because this involves a student being on the calling side.
i.e:
student a, b;
cout << a + b;
a + b; is the same as typing a.operator+(b);
But we override operators to make code more readable. So we do a + b; operator+
sees there's an a on the left side (so it's treated as the object) and b is on
the right side, so it's treated as s.
operator+ has to return the result so if we do something like:
student c = a + b;
...it can actually work!
So we create a new student and modify it's variables accordingly.

Keep in mind that this is not practical, so it might not make sense, but the
purpose is to show you that you can use operator+ for these sorts of things. */

student student::operator+(const student& s)
{
	student r(" ", "Freshman", 0); //this is our return variable

	r.name = name + " " + s.name; //Add their names together

	//These statements check in order to give our new student the highest year
	if(year == "Senior" || s.year == "Senior")
		r.year = "Senior";
	else if(s.year == "Junior" || year == "Junior")
		r.year = "Junior";
	else if(year == "Sophomore" || s.year == "Sophomore")
		r.year = "Sophomore";
	else //otherwise it has to be either freshman or invalid
		r.year = "Freshman";

	//Give our new student the higher of the two GPAs
	if(gpa > s.gpa)
		r.gpa = gpa;
	else
		r.gpa = s.gpa;

	return r; //return our student
}

/* copy constructor
We make this so if we want to make a new student b that is the same as a, we can
just do student b(a);

I think it is also necessary if you want to do
student c = a + b;
But I could be wrong. Either way that line works without us overloading the
operator = */

student::student(const student& s)
{
	name = s.name; year = s.year; gpa = s.gpa;
}

//END PART 3
//Go back to student.h
