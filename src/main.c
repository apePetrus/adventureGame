#include <stdio.h>
#include "game.h"

int main() {
    init_game();

    Player player = {COLS / 2, LINES / 2, '@'};  // Starts player at the center of the screen

    draw_player(&player);  // Draws player for the first time

    while (1) {
        game_loop(&player);  // Executes the main game loop
    }

    endwin();  // Stops ncurses
    return 0;
}
