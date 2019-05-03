#include <iostream>

using namespace std;

int main()
{
	int swtch;
	bool whilevar = true;

	do {
		cin >> swtch;

		switch (swtch) {
			case 0:
				cout << "You entered 0\n";
				break;
			case 1:
				cout << "You entered 1\n";
				break;
			case 2:
				cout << "You entered 2\n";
				break;
			case 99:
				cout << "Later dawg\n";
				whilevar = false;
				break;
			default:
				continue;
		}

		cout << "After the switch.\n";
	} while (whilevar);

	return 0;
}
