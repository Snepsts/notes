#include <ncurses.h>

int main()
{
	int ch;

	initscr(); //start curses mode
	raw(); //disable line buffering
	keypad(stdscr, true); //we get F1, F2, etc
	noecho(); //don't echo() while we do getch

	printw("Type any character to see it in bold\n");
	ch = getch(); //if raw() hadn't been called, we'd have to press enter before
	              //it gets to the program.
	if (ch == KEY_F(2)) //without keypad enabled this will not get to us either
		printw("F2 key pressed");

	else {
		printw("The pressed key is ");
		attron(A_BOLD);
		printw("%c", ch);
		attroff(A_BOLD);
	}

	refresh(); //print it on to the real screen
	getch(); //wait for user input
	endwin(); //end curses mode

	return 0;
}
