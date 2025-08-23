#include <ncurses.h>
#include "../include/map.h"

static WINDOW *mapwin = NULL;

void init_map(void){
    mapwin = newwin(MAP_HEIGHT, MAP_WIDTH, 0, 0);
    box(mapwin, 0, 0);
    wrefresh(mapwin);
}

void draw_map(void){
    // For now, fill interior with spaces if needed
    for (int y = 1; y < MAP_HEIGHT - 1; y++) {
        for (int x = 1; x < MAP_WIDTH - 1; x++) {
            mvwaddch(mapwin, y, x, ' ');
        }
    }

    box(mapwin, 0, 0);
}

WINDOW* get_mapwin(void) {
    return mapwin;
}
