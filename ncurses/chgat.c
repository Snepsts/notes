#include <ncurses.h>

int main(int argc, char *argv[])
{
	initscr(); //start curses mode
	start_color(); //enable color functionality

	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	printw("A big string which I didn't care to type fully");
	mvchgat(0, 0, -1, A_BLINK, 1, NULL);
	/* mvchgat
	 * First two parameters specify the position to start. We're starting at 0,0
	 * Third parameter is the number of characters to update, -1 means till EOL.
	 * Fourth parameter is the normal attr to give to the character.
	 * Fifth is the color index. It is the index given during init_pair() use 0
	 * if you didn't want color.
	 * Sixth one is always NULL.
	 * chgat(-1, A_REVERSE, 0, NULL); will do it at the current position.
	 */

	 refresh();
	 getch();
	 endwin(); //end curses mode

	return 0;
}
