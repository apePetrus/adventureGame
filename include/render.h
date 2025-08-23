#ifndef RENDER_H
#define RENDER_H

#include <ncurses.h>

void init_map(void);
void draw_map(void);
WINDOW* get_mapwin(void);

#endif
