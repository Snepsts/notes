#include <iostream>

using namespace std;

int main()
{
	int channel;

	cout << "Enter a channel: ";
	cin >> channel;

	if(channel == 2)
		cout << "Standard News Network\n";
	if(channel == 3)
		cout << "Public Broadcasting Services\n";
	if(channel == 5)
		cout << "Alternative News Network\n";
	if(channel == 7)
		cout << "Humor Center\n";
	if(channel == 11)
		cout << "Action Network\n";
	if(channel != 2 && channel != 3 && channel != 5 && channel != 7 && channel != 11)
		cout << "No network with your number found.\n";

	return 0;
}
