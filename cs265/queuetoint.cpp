#include <queue>
#include <iostream>
#include <string>

using namespace std;

int ctoi(queue<char> &q, const string& s);

int main()
{
	string s;
	cout << "Please enter an integer: \n";
	cin >> s;

	queue<char> q;

	cout << ctoi(q, s) << '\n';

	return 0;
}

int ctoi(queue<char> &q, const string& s)
{
	//1234
	//1, 2, 3, 4
	for(int i = 0; i < s.length(); i++)
		q.push(s[i]);

	int r = 0;

	int temp;
	for(int i = s.length(); i > 0; i--)
	{
		temp = (int)q.front() - 48;

		for(int j = 1; j < i; j++)
			temp *= 10;

		r += temp;

		q.pop();
	}

	return r;
}
