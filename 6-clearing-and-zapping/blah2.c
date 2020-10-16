#include <ncurses.h>

int main(void) {
	int y, x, cmax;

	initscr();

	getmaxyx(stdscr, y, x);
	cmax = (x * y) / 5;
	for(int c = 0; c < cmax; c++) addstr("blah ");
	refresh();
	getch();

	move(5, 20);    /* Setup the cursor */
	clrtoeol();		/* clear to the end of the line */
	refresh();
	getch();

	endwin();
	return 0;
}
