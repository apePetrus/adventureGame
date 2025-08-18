#ifndef MAP_H
#define MAP_H

#include <ncurses.h>

#define MAP_WIDTH 64
#define MAP_HEIGHT 20

void init_map(void);
void draw_map(void);
WINDOW* get_mapwin(void);

#endif