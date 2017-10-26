#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int ch, prev, row, col;
	prev = EOF;
	FILE *fp;
	int y, x;

	if (argc != 2) {
		printf("Usage: %s <a c file name>\n", argv[0]);
		return 1;
	}

	fp = fopen(argv[1], "r");

	if (fp == NULL) {
		perror("Cannot open input file");
		return 1;
	}

	initscr(); //start curses mode
	getmaxyx(stdscr, row, col); //find the boundaries of the screen

	while ((ch = fgetc(fp)) != EOF) { //read file until we reach the end
		getyx(stdscr, y, x); //get the current cursor position

		if (y == (row-1)) {
			printw("<-Press Any Key->");
			getch();
			clear();
			move(0,0);
		}

		if (prev == '/' && ch == '*') { //if it is / and * then only switch bold on
			attron(A_BOLD); //bold on
			getyx(stdscr, y, x); //get current cursor position
			move(y, x-1); //back up one space
			printw("%c%c", '/', ch); //the actual printing is done
		} else {
			printw("%c", ch);
		}

		refresh(); //make it all appear on screen

		if (prev == '*' && ch == '/') //switch it off once we got * and then /
			attroff(A_BOLD);

		prev = ch; //store last ch into prev
	}

	getch();
	endwin(); //end curses mode
	fclose(fp); //close file

	return 0;
}
