#include <ncurses.h>
#include <string.h>

int main(void) {
    char text[] = "Stock Market Swells! DOW tops 15,000!";
    char * t = text;
    int len strlen(text);

    initscr();

    while(len) {
        move(5, 5);             /* always insert at the same spot */
        insch( *(t + len - 1) );    /* work through string backwards */
        refresh();
        napms(100);             /* 0.1 sec. delay */
        len--;
    }
    getch();

    endwin();
    return 0;
}
