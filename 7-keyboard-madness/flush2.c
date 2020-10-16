#include <ncurses.h>

int main(void) {
    char buffer[81];

    initscr();

    addstr("Type on the keyboard whilst I wait...\n");
    refresh();
    napms(5000);        /* wait 5 seconds */

    addstr("Here is what you typed:\n");
    flushinp();         /* flushes the input buffer */
    getnstr(buffer, 80);
    refresh();

    endwin();
    return 0;
}
