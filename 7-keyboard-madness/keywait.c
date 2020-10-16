#include <ncurses.h>

int main(void) {
    int value = 0;

    initscr();

    addstr("Press any key to begin: ");
    refresh();
    getch();

    nodelay(stdscr, TRUE);          /* turn off getch() wait, returns ERR if no key is pressed */
    addstr("\nPress the Spacebar to stop the insane loop!\n");
    while( getch() != ' ' ) {
        printw("%d\r", value++);
        refresh();
    }

    endwin();
    return 0;
}
