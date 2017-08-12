#include <stack>
#include <iostream>

using namespace std;

int main()
{
	string str, revstr;
	str = "void";
	stack<char> s;

	for(int i = 0; i < str.length(); i++)
	{
		s.push(str[i]);
	}

	while(!s.empty())
	{
		revstr += s.top();
		s.pop();
	}

	cout << revstr << '\n';

	return 0;
}
