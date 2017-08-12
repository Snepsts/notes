#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	for(int i = 0; i < 10; i++)
	{
		int num;
		cout << "Please enter a number for the vector: ";
		cin >> num;
		v.push_back(num);
	}

	int mini = v[0];
	int maxi = v[0];

	for(int i = 1; i < v.size(); i++)
	{
		if(maxi < v[i])
			maxi = v[i];

		if(mini > v[i])
			mini = v[i];
	}

	cout << "The max is: " << maxi << '\n';
	cout << "The min is: " << mini << '\n';

	return 0;
}
