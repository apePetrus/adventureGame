#include <ncurses.h>
#include "../include/game.h"

void render (Player *player) {
    werase(get_mapwin());
    werase(get_logwin());
    werase(get_inventorywin());

    draw_map();
    draw_player(player);
    draw_log();
    draw_inventory();

    wrefresh(get_mapwin());
    wrefresh(get_logwin());
    wrefresh(get_inventorywin());
}
