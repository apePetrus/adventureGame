#include <ncurses.h>
#include "../include/game.h"
#include "../include/map.h"
#include "../include/log.h"
#include "../include/inventory.h"

int main() {
    Player player;

    init_game();
    init_map();
    init_log();
    init_inventory();
    init_player(&player, MAP_WIDTH / 2, MAP_HEIGHT / 2, '@');

    while (1) {
        game_loop(&player);
    }

    endwin();
    return 0;
}

