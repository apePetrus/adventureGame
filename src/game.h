#ifndef GAME_H
#define GAME_H
#define MAP_WIDTH 20
#define MAP_HEIGHT 10
#include <ncurses.h>

typedef struct {  // Player structure
    int x;
    int y;
    char symbol;
} Player;

void init_game();
void game_loop(Player *player);
void draw_player(Player *player);
// Pointing to the Player struct is useful to actually modify the original structure
// If you just used the struct directly, the function would make changes locally,
// not affecting the orignal.

typedef struct{
    char tiles[MAP_HEIGHT][MAP_WIDTH];  // Matrix that represents the map
} Map;

void init_map(Map *map);
void draw_map(const Map *map);


#endif