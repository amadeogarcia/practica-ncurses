#include <ncurses.h>

int main(void) {
    char text[5][10] = { "Do", "you", "find", "this", "silly?" };

    initscr();

    for(int a = 0; a < 5; a++) {
        for(int b = 0; b < 5; b++) {
            if( b == a ) attrset(A_BOLD | A_UNDERLINE);
            printw("%s", text[b]);
            if( b == a ) attroff(A_BOLD | A_UNDERLINE);
            addch(' ');
        }
        addstr("\b\n");
    }
    refresh();
    getch();

    endwin();
    return 0;
}
