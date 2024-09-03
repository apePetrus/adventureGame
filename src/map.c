// src/map.c

#include <ncurses.h>
#include "map.h"

void init_map(Map *map){
    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH; x++) {
            if (y == 0 || y == MAP_HEIGHT - 1 || x == 0 || x == MAP_WIDTH - 1) {
                map->tiles[y][x] = '#';  // Walls
            }
            else {
                map->tiles[y][x] = ' ';  // Empty space
            }
        }
    }
}

void draw_map(const Map *map){
    clear();

    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH; x++) {
            mvprintw(y, x, "%c", map->tiles[y][x]);  // Draws the map on the screen
        }
    }
}