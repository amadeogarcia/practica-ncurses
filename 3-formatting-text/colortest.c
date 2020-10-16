#include <ncurses.h>
#include <stdlib.h>

void bomb(char * msg) {
    endwin();
    puts(msg);
    exit(1);
}

int main(void) {
    initscr();

    /* First test for color ability of the terminal */

    if( !has_colors() )
        bomb("Terminal cannot do colors.\n");

    /* Next attempt to initialize curses colors */

    if( start_color() != OK )
        bomb("Unable to start colors.\n");

    /* Colors are okay: continue */

    printw("Colors have been properly initialized.\n");
    printw("Congratulations!\n");
    printw("NCurses reports that you can use %d colors,\n", COLORS);
    printw("and %d color pairs.", COLOR_PAIRS);
    refresh();
    getch();

    endwin();
    return 0;
}
