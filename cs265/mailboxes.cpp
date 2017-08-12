#include <iostream>

using namespace std;

enum mailboxdoor { open, closed };

void init_mb(mailboxdoor mb[], int size);
void openeveryotherdoor(mailboxdoor mb[], int size);
void openclose(mailboxdoor mb[], int size);
void printmb(mailboxdoor mb[], int size);

int main()
{
	const int NUM_OF_MAILBOXES = 150;
	mailboxdoor mailboxes[NUM_OF_MAILBOXES];

	init_mb(mailboxes, NUM_OF_MAILBOXES); //set them all to closed
	openeveryotherdoor(mailboxes, NUM_OF_MAILBOXES); //set every other one to open
	openclose(mailboxes, NUM_OF_MAILBOXES); //open and close every third door
	printmb(mailboxes, NUM_OF_MAILBOXES); //print it out

	return 0;
}

void init_mb(mailboxdoor mb[], int size)
{
	for(int i = 0; i < size; i++)
		mb[i] = closed;
}

void openeveryotherdoor(mailboxdoor mb[], int size)
{
	for(int i = 1; i < size; i += 2)
		mb[i] = open;
}

void openclose(mailboxdoor mb[], int size)
{
	for(int j = 2; j < size; j++)
	{
		for(int i = j; i < size; i += j+1)
		{
			if(mb[i] == open)
				mb[i] = closed;
			else //mb[i] == closed
				mb[i] = open;
		}
	}
}

void printmb(mailboxdoor mb[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(mb[i] == closed)
			cout << "Mailbox #" << i+1 << " is closed.\n";
	}
}
