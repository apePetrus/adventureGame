#include <ncurses.h>
#include <stdlib.h>
#include "../include/game.h"

void init_game() {
    initscr();
    raw();  // Deactivate line buffering and special signal characters
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);  // Enables special chars input like arrows
    timeout(100);  // Define a timeout for getch(), keeping the game running
    nodelay(stdscr, TRUE);  // Non-blocking mode for getch()
}

void game_loop(Player *player) {
    render(player);

    int ch = getch();
    if (ch != ERR) {
        switch (ch){
            case 'W':
            case 'w':
                player->y = (player->y > 1) ? player->y - 1: player->y;
                break;

            case 'A':
            case 'a':
                player->x = (player->x > 1) ? player->x - 1 : player->x;
                break;

            case 'S':
            case 's':
                player->y = (player->y < MAP_HEIGHT - 2) ? player->y + 1 : player->y;
                break;

            case 'D':
            case 'd':
                player->x = (player->x < MAP_WIDTH - 2) ? player->x + 1 : player->x;
                break;
            // Using "player->x" is a way to access the 'x' field of the Player struct

            case 'Q':
            case 'q':
                endwin();
                exit(0);
        }
    }
}
