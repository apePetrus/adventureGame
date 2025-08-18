#include <ncurses.h>
#include <stdlib.h>
#include "../include/game.h"

void init_game() {
    initscr();
    // raw();  // Grabs pressed keys instantly
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);  // Enables special chars input like arrows
    // timeout(100);  // Define a timeout for getch()

    nodelay(stdscr, TRUE);  // Non-blocking mode for getch()
    // cbreak();  // Deactivate line buffering
}


void game_loop(Player *player) {
    int ch = getch();

    if (ch != ERR) {
        switch (ch){
            case 'W':
            case 'w':
                player->y = (player->y > 0) ? player->y - 1 : player->y;
                break;

            case 'A':
            case 'a':
                player->x = (player->x > 0) ? player->x - 1 : player->x;
                break;

            case 'S':
            case 's':
                player->y = (player->y < MAP_HEIGHT - 1) ? player->y + 1 : player->y;
                break;

            case 'D':
            case 'd':
                player->x = (player->x < MAP_WIDTH - 1) ? player->x + 1 : player->x;
                break;
            // Using "player->x" is a way to access the 'x' field of the Player struct

            case 'Q':
            case 'q':
                endwin();
                exit(0);
        }
        draw_map();
        draw_player(player);
        wrefresh(get_mapwin());
    }
}