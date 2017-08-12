#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//declare a vector of doubles named vecLane
	vector<double> vecLane;

	//fill vecLane with .1 .2 .3 .4 .5
	for(double d = 0.1; d < 0.6; d += 0.1) //d = d + 0.1
		vecLane.push_back(d);

	/* 	vecLane.push_back(0.1);
		vecLane.push_back(0.2);
		vecLane.push_back(0.3);
		vecLane.push_back(0.4);
		vecLane.push_back(0.5); */

	// [0.1] [0.2] [0.3] [0.4] [0.5] [END]

	//write statement to find the ending location of vecLane and assign it to iterator pos:
	vector<double>::iterator pos = vecLane.end(); //.begin() .end()

	//then move back iterator pos one position
	pos--;

	//Then retrieve the item in above iterator and output it to the screen
	cout << *pos << '\n';

	return 0;
}
