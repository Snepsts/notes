#include <iostream>
#include <vector>
#include <deque>

using namespace std;

template <typename T>
void fill(deque<T>& d, vector<T> v)
{
	for(int i = 0; i < v.size(); i++)
		d.push_back(v[i]);
	/*
	for(vector<T>::iterator itr = v.begin(); itr != v.end(); itr++)
		d.push_back(*itr);
	*/
}

int main()
{
	vector<int> v;
	deque<int> d;

	for(int i = 0; i < 20; i += 3)
		v.push_back(i);

	fill(d, v);

	while(!d.empty())
	{
		cout << d.front() << " ";
		d.pop_front();
	}

	cout << '\n';

	return 0;
}
