#include <ncurses.h>

//gcc hello_world.c -lncurses

int main()
{
	initscr(); //start curses mode
	printw("Hello, World!"); //print hello world
	refresh(); //refresh screen so hello world is printed
	getch(); //wait for use input
	endwin(); //end curses mode

	return 0;
}
