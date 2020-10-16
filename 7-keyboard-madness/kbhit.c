#include <ncurses.h>

int kbhit(void) {
    int ch, r;

    // turn off the getch() blocking and echo
    nodelay(stdscr, TRUE);
    noecho();

    // check for input
    ch = getch();
    if( ch == ERR )     /* no input */
        r = FALSE;
    else {              /* input */
        r = TRUE;
        ungetch(ch);    /* places 'ch' back into the input buffer */
    }

    // restore getch() blocking and echo
    echo();
    nodelay(stdscr, FALSE);
    return r;
}

int main(void) {
    initscr();

    addstr("Press any key to end this program: ");
    while( !kbhit() );

    endwin();
    return 0;
}
