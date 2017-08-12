#include <iostream>

using namespace std;

int main()
{
	for(int i = 1; i <= 3; i++){
		cout << i << ' ';
	}

	cout << '\n';

	for(int i = 1; i <= 3; i++){
		cout << i << '\n';
	}

	int i = 1;
	while(i <= 3){
		cout << i << ' ';
		i++;
	}
	while(i <= 3){
		cout << i << '\n';
		i++;
	}

	return 0;
}
