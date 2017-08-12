#include <iostream>

using namespace std;

//average of two numbers

int average1(int a, int b);
int average2();
void average3(int a, int b);
void average4();
void average5(int a, int b, int &c);
void average6(int &c);

int main()
{
	//First way
	int a, b;
	cout << "Please enter your first value: ";
	cin >> a;
	cout << "Please enter your second value: ";
	cin >> b;
	cout << "The average is: " << average1(a, b) << '\n';

	//Second way
	int c = average2();
	cout << "The average is: " << c << '\n';

	//Third way
	cout << "Please enter your first value: ";
	cin >> a;
	cout << "Please enter your second value: ";
	cin >> b;
	average3(a, b);

	//Fourth way
	average4();

	//Fifth way
	cout << "Please enter your first value: ";
	cin >> a;
	cout << "Please enter your second value: ";
	cin >> b;
	average5(a, b, c);
	cout << "The average is: " << c << '\n';

	//Sixth way
	average6(c);
	cout << "The average is: " << c << '\n';

	return 0;
}

//takes two parameters and returns the average
int average1(int a, int b)
{
	return (a + b) / 2;
}

//takes zero parameters, prompt for a and b and return their values
int average2()
{
	int a, b;
	cout << "Please enter your first value: ";
	cin >> a;
	cout << "Please enter your second value: ";
	cin >> b;

	return (a + b) / 2;
}

//takes two parameters and prints their average
void average3(int a, int b)
{
	cout << "The average is: " << (a + b) / 2 << '\n';
}

//take zero parameters, prompt for a and b and print the value
void average4()
{
	int a, b;
	cout << "Please enter your first value: ";
	cin >> a;
	cout << "Please enter your second value: ";
	cin >> b;
	cout << "The average is: " << (a + b) / 2 << '\n';
}

//takes three parameters, make the third equal to the average of the first two
void average5(int a, int b, int &c)
{
	c = (a + b) / 2;
}

void average6(int &c)
{
	int a, b;
	cout << "Please enter your first value: ";
	cin >> a;
	cout << "Please enter your second value: ";
	cin >> b;
	c = (a + b) / 2;
}

/*
#include <iostream>

using namespace std;

int aplusb(int a, int b);
void aplus3(int a); //pass by value
void bplus3(int& b); //pass by reference

int main()
{
	int x;
	cout << "Please enter an a: ";
	cin >> x;

	cout << "Before aplus3(x): " << x << '\n';

	aplus3(x);
	aplus3(x);
	aplus3(x);

	cout << "After aplus3(x): " << x << '\n';

	cout << "Please enter a b: ";
	cin >> x;

	cout << "Before bplus3(x): " << x << '\n';

	bplus3(x);
	bplus3(x);
	bplus3(x);

	cout << "After bplus3(x): " << x << '\n';

	return 0;
}

int aplusb(int a, int b)
{
	return a + b;
}

void aplus3(int a) //pass by value
{
	a += 3;
	cout << a << '\n';
}

void bplus3(int& b) //pass by reference
{
	b += 3;
	cout << b << '\n';
}

/*
#include <iostream>

using namespace std;

int aplusb(int a, int b);

int main()
{
	int x, y;

	cout << "Please enter an a: ";
	cin >> x;
	cout << "Please enter a b: ";
	cin >> y;

	cout << "A plus B is: " << aplusb(x, y) << ".\n";

	return 0;
}

int aplusb(int a, int b)
{
	return a + b;
}
*/
