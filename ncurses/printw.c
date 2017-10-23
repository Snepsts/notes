#include <ncurses.h>
#include <string.h>

int main()
{
	char msg[] = "Just a string"; //message to be displayed on the screen
	int row, col; //to store number of rows and cols of screen

	initscr(); //start curses
	getmaxyx(stdscr, row, col); //get number of rows and cols
	mvprintw(row/2, (col-strlen(msg))/2, "%s", msg); //print msg at center of screen

	mvprintw(row-2, 0, "This screen has %d rows and %d columns\n", row, col);
	printw("Try resizing your window (if possible) and then run this program again");
	refresh(); //make messages appear
	getch(); //await user input to end program
	endwin();

	return 0;
}
