// include/map.h

#ifndef MAP_H
#define MAP_H

#define MAP_WIDTH 20
#define MAP_HEIGHT 10

typedef struct{
    char tiles[MAP_HEIGHT][MAP_WIDTH];  // Matrix that represents the map
} Map;

void init_map(Map *map);
void draw_map(const Map *map);

#endif  // MAP_H