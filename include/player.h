#ifndef PLAYER_H
#define PLAYER_H

#include <ncurses.h>

WINDOW* get_mapwin(void);

typedef struct {
    int x;
    int y;
    char symbol;
} Player;

void init_player(Player *player, int startX, int startY, char symbol);
void draw_player(const Player *player);
// Pointing to the Player struct is useful to actually modify the original structure
// If you just used the struct directly, the function would make changes locally,
// not affecting the orignal.

#endif