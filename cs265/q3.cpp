#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> intVector;
	vector<int>::iterator vecIt;

	intVector.push_back(3);
	intVector.push_back(5);
	intVector.push_back(7);

	vecIt = intVector.begin();
	vecIt++;
	intVector.erase(vecIt);

	intVector.push_back(9);

	for(int i = 0; i < intVector.size(); i++)
		cout << intVector[i];

	cout << '\n';

	return 0;
}
