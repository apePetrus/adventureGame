// src/player.c

#include <ncurses.h>
#include "player.h"

void init_player(Player *player, int startX, int startY, char symbol){
    player->x = startX;  // Sets player initial X position
    player->y = startY;  // Sets player initial Y position
    player->symbol = symbol;  // Defines player symbol
}

void draw_player(const Player *player){
    mvprintw(player->y, player->x, "%c", player->symbol);  // Draws player in current position
}