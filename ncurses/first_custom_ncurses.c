#include <ncurses.h>

WINDOW *create_new_win(int height, int width, int starty, int startx);
void destroy_win(WINDOW *local_win);

int main()
{
	WINDOW *maze;
	int row, col; //to store number of rows and cols of screen

	getmaxyx(stdscr, row, col); //get number of rows and cols

	initscr(); //start curses mode
	start_color(); //enable color functionality
	cbreak(); //line buffering disabled

	init_pair(1, COLOR_YELLOW, COLOR_BLACK);
	init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);

	attron(COLOR_PAIR(1));
	printw("My first window program.");
	refresh();

	maze = create_new_win(12, 24, 3, 1);
	wattron(maze, COLOR_PAIR(2));
	mvwaddch(maze, 1, 1, 'a');
	wrefresh(maze);

	WINDOW *text;

	text = create_new_win(12, 32, 3, 26);
	wattron(text, COLOR_PAIR(3));
	mvwaddch(text, 1, 1, 'a');
	wrefresh(text);

	WINDOW *menu;

	menu = create_new_win(5, 36, row/2, col/2-18);
	wattron(menu, COLOR_PAIR(4));
	mvwaddch(menu, 1, 1, 'a');
	wrefresh(menu);

	refresh();
	getch(); //get user input before ending curses mode
	endwin(); //end curses mode

	return 0;
}

WINDOW *create_new_win(int height, int width, int starty, int startx)
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
	//we use all these ugly ' ' chars b/c it destroys all of the window sides
	wborder(local_win, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');

	wrefresh(local_win); //refresh to nothing
	delwin(local_win); //delete the window
}
