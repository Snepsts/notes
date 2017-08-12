#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> d;

	d.push_back(1);
	d.push_front(2);
	d.push_back(3);
	d.push_front(4);

	d.pop_front();
	d.pop_back();

	for(deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		cout << *dit << " ";

	cout << '\n';

	return 0;
}
