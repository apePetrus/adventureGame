#include <ncurses.h>
#include "../include/game.h"

void render (Player *player) {
    werase(get_mapwin());
    werase(get_logwin());

    draw_map();
    draw_player(player);
    draw_log();

    wrefresh(get_mapwin());
    wrefresh(get_logwin());
}
