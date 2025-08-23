#include <ncurses.h>
#include "../include/log.h"
#include "../include/map.h"

static WINDOW *logwin = NULL;

void init_log(void){
    logwin = newwin(LOG_HEIGHT, LOG_WIDTH, MAP_HEIGHT, 0);
    box(logwin, 0, 0);
    wrefresh(logwin);
}

void draw_log(void){
    // For now, fill interior with spaces if needed
    for (int y = 1; y < LOG_HEIGHT - 1; y++) {
        for (int x = 1; x < LOG_WIDTH - 1; x++) {
            mvwaddch(logwin, y, x, ' ');
        }
    }

    box(logwin, 0, 0);
}

WINDOW* get_logwin(void) {
    return logwin;
}
