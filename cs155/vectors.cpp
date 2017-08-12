#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> vi;

	vi.push_back(1);
	vi.push_back(2);
	vi.push_back(3);
	vi.push_back(4);
	vi.push_back(5);

	for(int i = 0; i < vi.size(); i++)
		cout << vi[i] << '\n';

	vector<char> vc;
	char c[10];

	return 0;
}
