#include <ncurses.h>
#include "../include/player.h"

void init_player(Player *player, int startX, int startY, char symbol){
    player->x = startX;
    player->y = startY;
    player->symbol = symbol;
}

void draw_player(const Player *player){
    mvwaddch(get_mapwin(), player->y, player->x, player->symbol);
}
