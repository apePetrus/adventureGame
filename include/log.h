#ifndef LOG_H
#define LOG_H

#include <ncurses.h>

#define LOG_WIDTH 84
#define LOG_HEIGHT 10

void init_log(void);
void draw_log(void);
WINDOW* get_logwin(void);

#endif
