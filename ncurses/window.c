#include <ncurses.h>

WINDOW *create_newwin(int height, int width, int starty, int startx);
void destroy_win(WINDOW *local_win);

int main()
{
	WINDOW *my_win;
	int startx, starty, width, height, ch;

	initscr(); //start curses mode
	cbreak(); //line buffering disabled

	keypad(stdscr, true); //function keys

	height = 3;
	width = 10;
	starty = (LINES - height) / 2; //calculating for centering the window
	startx = (COLS - width) / 2;
	printw("Press F2 to exit.");
	refresh();
	my_win = create_newwin(height, width, starty, startx);

	while ((ch = getch()) != KEY_F(2)) {
		switch (ch) {
		case KEY_LEFT:
			if (startx > 0) { //check for left
				destroy_win(my_win);
				my_win = create_newwin(height, width, starty, --startx);
			}
			break;
		case KEY_RIGHT:
			if (startx < COLS - width) { //check for box adjusted for width
				destroy_win(my_win);
				my_win = create_newwin(height, width, starty, ++startx);
			}
			break;
		case KEY_UP:
			if (starty > 0) { //check for top
				destroy_win(my_win);
				my_win = create_newwin(height, width, --starty, startx);
			}
			break;
		case KEY_DOWN:
			if (starty < LINES - height) { //check for box adjusted for height
				destroy_win(my_win);
				my_win = create_newwin(height, width, ++starty, startx);
			}
			break;
		}
	}

	endwin(); //end curses mode

	return 0;
}

WINDOW *create_newwin(int height, int width, int starty, int startx)
{
	WINDOW *local_win;

	local_win = newwin(height, width, starty, startx);
	box(local_win, 0, 0); //0, 0 gives default characters for the vertical and
	                       //horizontal lines
	wrefresh(local_win); //show the box

	return local_win;
}

void destroy_win(WINDOW *local_win)
{
	/* box(local_win, ' ', ' '); : This won't produce the desired result of
	 * erasing the window. It will leave it's four corners and therefore an ugly
	 * remnant of the window.
	 */

	wborder(local_win, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');

	/* The parameters taken are
	 * 1. win: the window on which to operate
	 * 2. ls: character to be used for the left side of the window
	 * 3. rs: character to be used for the right side of the window
	 * 4. ts: character to be used for the top side of the window
	 * 5. bs: character to be used for the bottom side of the window
	 * 6. tl: character to be used for the top left corner of the window
	 * 7. tr: character to be used for the top right corner of the window
	 * 8. bl: character to be used for the bottom left corner of the window
	 * 9. br: character to be used for the bottom right corner of the window
	 */

	wrefresh(local_win); //refresh to nothing
	delwin(local_win); //delete the window
}
