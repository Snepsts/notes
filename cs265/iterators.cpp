#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	v.push_back(4);
	v.push_back(62);
	v.push_back(856);
	v.push_back(26);
	v.push_back(7469);

	for(vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << &i << endl;
	}

	return 0;
}
