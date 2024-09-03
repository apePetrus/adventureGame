// include/game.h

#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "map.h"

void init_game();
void game_loop(Player *player, Map *map);

#endif  // GAME_H