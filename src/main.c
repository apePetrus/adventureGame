#include <ncurses.h>
#include "../include/game.h"

int main() {
    Map map;
    Player player;

    init_game();
    init_map(&map);
    init_player(&player, MAP_WIDTH / 2, MAP_HEIGHT / 2, '@');

    while (1) {
        game_loop(&player, &map);
    }

    endwin();  // Stops ncurses
    return 0;
}
