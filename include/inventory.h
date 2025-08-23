#ifndef INVENTORY_H
#define INVENTORY_H

#include <ncurses.h>

#define INVENTORY_WIDTH 20
#define INVENTORY_HEIGHT 20

void init_inventory(void);
void draw_inventory(void);
WINDOW* get_inventorywin(void);

#endif
