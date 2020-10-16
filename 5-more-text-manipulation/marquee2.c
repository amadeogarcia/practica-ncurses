#include <ncurses.h>
#include <string.h>

void fill(void) {
    int x, y;

    getmaxyx(stdscr, y, x);
    for(int a = 0; a < y; a++)
        addstr("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
}

int main(void) {
    char text[] = "Stock Market Swells! DOW tops 15,000!";
    char * t = text;
    int len = strlen(text);

    initscr();

    fill();
    refresh();

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
