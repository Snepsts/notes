#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<double> vecLane;

	for(double i = 0.1; i < 0.6; i += 0.1)
		vecLane.push_back(i);

	vector<double>::iterator dolphin = vecLane.begin();

	//[0.1] [0.2] [0.3] [0.4] [0.5] [END]

	dolphin++;

	cout << *dolphin << endl;

	return 0;
}
