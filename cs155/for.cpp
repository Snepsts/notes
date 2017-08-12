#include <iostream>

using namespace std;

int main()
{
	/* conditional
		<, >, <=, >=, ==, !=, !, &&, ||


	while()
	{
		i++;
	}

	for()
	*/

	//for(/*variable:*/ int i = 0; /*conditional:*/ i < 20; /*statement:*/ i++ /*i++*/)
	/*{
		cout << i << endl;
	}

	bool isDone;

	cout << "Enter 1 to add a and b\n";
	cout << "Enter 2 to subtract a and b\n";
	cout << "Enter 3 to exit\n";
*/
	int a;
	cout << "Please enter a number between 0-6\n";

	do{
		cin >> a;
		if(a < 1 || a > 5)
			cout << "Wrong value, try again\n";
	}while(a < 1 || a > 5);
/*
	do{
		cin >> swtch;

		switch(isDone)
		{
			case 1:
				cout << a + b << '\n';
				isDone = false;
				break;
			case 2:
				cout << a - b << '\n';
				isDone = false;
				break;
			case 3:
				isDone = true;
				break;
			default:
				cout << "Invalid Selection\n";
				break;
		}
	}while(!isDone);

	bool isDone = false;

	while(!isDone){
		cin >> swtch;

		switch(isDone)
		{
			case 1:
				cout << a + b << '\n';
				isDone = false;
				break;
			case 2:
				cout << a - b << '\n';
				isDone = false;
				break;
			case 3:
				isDone = true;
				break;
			default:
				cout << "Invalid Selection\n";
				break;
		}
	}

	bool isNotDone = true;

	int a = 1;
	int b = 2;

	int i = 0;

	do {

	} while(i != 0);

	while(isNotDone)
	{
		a += b;
		cout << a << endl;
		if (a > 10)
			isNotDone = false;
	}

	/*
	for(int i = 0; i < size; i++)
	{

	}

	for(int i = 0; i < size; i++)
	*/

	return 0;
}
