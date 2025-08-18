#include <ncurses.h>
#include "../include/player.h"

void init_player(Player *player, int startX, int startY, char symbol){
    player->x = startX;
    player->y = startY;
    player->symbol = symbol;
}

void draw_player(const Player *player){
    mvprintw(player->y, player->x, "%c", player->symbol);
}