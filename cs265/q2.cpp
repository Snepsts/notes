#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> d;

	for(int i = 25; i < 30; i++)
	{
		if(i % 2 != 0)
		 	d.push_front(i);
		else
			d.push_back(i);
	}

	while(!d.empty())
	{
		cout << d.back();
		d.pop_back();
	}

	return 0;
}
