// src/main.c

#include <ncurses.h>
#include "game.h"

int main() {
    Map map;
    Player player;

    init_game();  // Starts ncurses and configures screen
    init_map(&map);  // Starts map
    init_player(&player, MAP_WIDTH / 2, MAP_HEIGHT / 2, '@');  // Starts player at the center of the map

    while (1) {
        game_loop(&player, &map);  // Executes the main game loop
    }

    endwin();  // Stops ncurses
    return 0;
}
