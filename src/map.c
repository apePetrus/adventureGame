#include <ncurses.h>
#include "../include/map.h"

void init_map(Map *map){
    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH; x++) {
            if (y == 0 || y == MAP_HEIGHT - 1 || x == 0 || x == MAP_WIDTH - 1) {
                map->tiles[y][x] = '#';
            }
            else {
                map->tiles[y][x] = ' ';
            }
        }
    }
}

void draw_map(const Map *map){
    clear();

    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH; x++) {
            mvprintw(y, x, "%c", map->tiles[y][x]);
        }
    }
}