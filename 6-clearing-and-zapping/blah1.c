#include <ncurses.h>

int main(void) {
	int y, x, cmax;

	initscr();

	getmaxyx(stdscr, y, x);
	cmax = (x * y) / 5;
	for(int c = 0; c < cmax; c++) addstr("blah ");
	refresh();
	getch();

	clear();		/* clear the screen */
	refresh();		/* don't forget this! */
	getch();

	endwin();
	return 0;
}