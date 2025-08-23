#include <ncurses.h>
#include "../include/inventory.h"
#include "../include/map.h"

static WINDOW *inventorywin = NULL;

void init_inventory(void){
    inventorywin = newwin(INVENTORY_HEIGHT, INVENTORY_WIDTH, 0, MAP_WIDTH);
    box(inventorywin, 0, 0);
    wrefresh(inventorywin);
}

void draw_inventory(void){
    // For now, fill interior with spaces if needed
    for (int y = 1; y < INVENTORY_HEIGHT - 1; y++) {
        for (int x = 1; x < INVENTORY_WIDTH - 1; x++) {
            mvwaddch(inventorywin, y, x, ' ');
        }
    }

    box(inventorywin, 0, 0);
}

WINDOW* get_inventorywin(void) {
    return inventorywin;
}
