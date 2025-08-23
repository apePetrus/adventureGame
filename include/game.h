#ifndef GAME_H
#define GAME_H

#include "render.h"
#include "player.h"
#include "map.h"
#include "log.h"

void init_game();
void render(Player *player);
void game_loop(Player *player);

#endif
