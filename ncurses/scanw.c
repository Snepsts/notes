#include <ncurses.h>
#include <string.h>

int main()
{
	char msg[] = "Enter a string: "; //message to display
	char str[80];
	int row, col; //number of rows and columns

	initscr(); //start curses
	getmaxyx(stdscr, row, col);
	mvprintw(row/2, (col-strlen(msg))/2, "%s", msg); //print at center of screen

	getstr(str);
	mvprintw(LINES-2, 0, "You entered: %s", str);
	getch(); //await user input to close program
	endwin();

	return 0;
}
