#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	vector<int>::iterator itr;
	int index;

	int num = 6;

	for(int i = 0; i < 10; i++)
		vec.push_back(i);

	cout << "Vector before deletion: ";

	for(itr = vec.begin(); itr < vec.end(); itr++)
		cout << *itr << ' ';

	cout << '\n';

	for(itr = vec.begin(); itr < vec.end(); itr++)
	{
		if(*itr == num)
			vec.erase(itr);
	}

	cout << "Vector after deletion: ";

	for(itr = vec.begin(); itr < vec.end(); itr++)
		cout << *itr << ' ';

	cout << '\n';

	return 0;
}
