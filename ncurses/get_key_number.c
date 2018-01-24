//this file was originally written by Github user lesovsky, all credit goes to him

#include <ncurses.h>

int main()
{
	initscr();
	keypad(stdscr, true);
	noecho();
	halfdelay(100);

	printw("Press F2 to exit.\n");

	bool ex = false;
	while (!ex) {
		int ch = getch();

		switch (ch) {
			case ERR:
				printw("Please, press any key...\n");
				break;
			case KEY_F(2):
				ex = true;
				break;
			default:
				printw("Code of pressed key is %d\n", ch);
				break;
		}

		refresh();
	}

	printw("Thank you, Good bye!");
	getch();
	endwin();

	return 0;
}
