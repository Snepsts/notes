#include <iostream>

using namespace std;

void val(int a);
void ref(int& a);
double retans(double height, double radius);

const double PI = 3.14;

int main()
{
	double area, r, h; //r is radius, h is height

	r = 3.54;
	h = 4.26;

	area = retans(h, r);

	cout << "Area is: " << retans(h, r) << '\n';

	/*
	int a = 10;

	cout << "a before val call: " << a << '\n';
	val(a);
	cout << "a after val call: " << a << '\n';

	cout << "a before ref call: " << a << '\n';
	ref(a);
	cout << "a after ref call: " << a << '\n';
	*/

	return 0;
}

double retans(double height, double radius)
{
	return ((2 * PI * (radius * radius) * height) + (2 * PI * radius * height));
}

void val(int a)
{
	a += 5;
	cout << "a in val: " << a << '\n';
}

void ref(int& a)
{
	a += 5;
	cout << "a in ref: " << a << '\n';
}
