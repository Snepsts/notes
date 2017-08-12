#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vecInt;

	for(int i = 1; i <= 5; i += 1)
	{
		vecInt.push_back(i);
	}

	vector<int>::iterator vecIt = vecInt.end();

	vecIt--;

	cout << *vecIt << endl;

	return 0;
}
