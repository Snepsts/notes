#include <iostream>

using namespace std;

/*
Write me 6 functions:

Each function will find the average between two numbers.

To find the average between two numbers, add them together and divide by 2.

For example: average = (a + b) / 2

(TIP: If I don’t ask for the function to return something, it should be a void function)

1. The first function should take two ints as parameters, by value and return their average.

2. The second function should take no parameters, have the user input the values for two ints, and return their average.

3. The third function should take two ints and print out their average.

4. The fourth function should take no parameters, have the user input two values, and print their average.

5. The fifth function should take three ints. Make the third int the average of the first two ints. DO NOT RETURN IT.

6. The sixth function should take one int, ask the user to input two ints, and make the average of those two ints the parameter int the function takes. DO NOT RETURN ANYTHING.

(Hint: if you’re stuck on the last two, look up “pass by reference c++”)
*/

//average = (a + b) / 2

int a1(int a, int b);
int a2();
void a3(int a, int b);
void a4();
void a5(int a, int b, int &c);
void a6(int &c);

int main()
{
	//function 1
	int a1one, a1two;

	cout << "Please enter an integer: ";
	cin >> a1one;
	cout << "Please enter another integer: ";
	cin >> a1two;
	cout << "The average is " << a1(a1one, a1two) << '\n';

	//function 2
	int a2average = a2();
	cout << "The average is " << a2average << '\n';

	//function 3
	int a3one, a3two;

	cout << "Please enter an integer: ";
	cin >> a3one;
	cout << "Please enter another integer: ";
	cin >> a3two;
	a3(a3one, a3two);

	//function 4
	a4();

	//function 5
	int a5one, a5two, a5three;
	cout << "Please enter an integer: ";
	cin >> a5one;
	cout << "Please enter another integer: ";
	cin >> a5two;
	a5(a5one, a5two, a5three);
	cout << "The average is " << a5three << '\n';

	//function 6
	int a6one;
	a6(a6one);
	cout << "The average is " << a6one << '\n';

	return 0;
}

int a1(int a, int b)
{
	return (a + b) / 2;
}

int a2()
{
	int a, b;

	cout << "Please enter an integer: ";
	cin >> a;
	cout << "Please enter another integer: ";
	cin >> b;

	return (a + b) / 2;
}

void a3(int a, int b)
{
	cout << "The average is " << (a + b) / 2 << '\n';
}

void a4()
{
	int a, b;
	cout << "Please enter an integer: ";
	cin >> a;
	cout << "Please enter another integer: ";
	cin >> b;
	cout << "The average is " << (a + b) / 2 << '\n';
}

void a5(int a, int b, int &c)
{
	c = (a + b) / 2;
}

void a6(int &c)
{
	int a, b;
	cout << "Please enter an integer: ";
	cin >> a;
	cout << "Please enter another integer: ";
	cin >> b;
	c = (a + b) / 2;
}
