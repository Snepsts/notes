#include <iostream>
#include <string>

using namespace std;

typedef int ArrayType;

void reversearray(ArrayType a[], int first, int last);

int fact(int n);

bool palindrome(const string& orig, const int& first, const int& last);

int main()
{
	string pal = "abcdefgfedcba";

	bool val = palindrome(pal, 0, 12);

	if(val)
		cout << pal << " is a palindrome!!!\n";
	else
		cout << pal << " is NOT a palindrome!!!\n";

	ArrayType a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << '\n';
	}

	reversearray(a, 0, 9);

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << '\n';
	}

	return 0;
}

void reversearray(ArrayType a[], int first, int last)
{
	if(first < last) //recursive case
	{
		ArrayType b = a[first];
		a[first] = a[last];
		a[last] = b;

		reversearray(a, first+1, last-1);
	}

	/*
	if(first >= last) //stop case
	{
		//do nothing cuz we done
	}

	else //recursive case
	{
		ArrayType b = a[first];
		a[first] = a[last];
		a[last] = b;

		reversearray(a, first+1, last-1);
	}
	*/
}

int fact(int n)
{
	if(n <= 1) //stop case
		return n;
	else //recursive case
		n *= fact(n-1); //n = n * fact(n-1)
}

bool palindrome(const string& orig, const int& first, const int& last)
{//abcdefgfedcba
	if(first >= last)
		return true;
	else if(orig[first] != orig[last])
		return false;
	else //orig[first] == orig[last]
		return palindrome(orig, first+1, last-1);
}
