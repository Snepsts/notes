#include <stack>
#include <iostream>

using namespace std;

int main()
{
	stack<int> s;

	for(int i = 1; i < 6; i++){
		s.push(i);
	}

	cout << s.top();
	s.pop();
	cout << s.top();
	s.pop();
	cout << s.top();
	s.pop();
	cout << s.top();
	s.pop();
	cout << s.top();

	return 0;
}
