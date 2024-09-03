// src/game.c

#include <ncurses.h>
#include <stdlib.h>
#include "game.h"

void init_game() {
    initscr();  // Start ncurses mode
    // raw();  // Grabs pressed keys instantly
    noecho();  // Does not show up typed characters
    curs_set(FALSE);  // Hide the cursor
    keypad(stdscr, TRUE);  // Enables special chars input like arrows
    // timeout(100);  // Define a timeout for getch()

    nodelay(stdscr, TRUE);  // Non-blocking mode for getch()
    // cbreak();  // Deactivate line buffering
}


void game_loop(Player *player, Map *map) {
    int ch = getch();  // Grabs pressed key

    if (ch != ERR) {  // ERR indicates that no key was pressed
        switch (ch){  
            case 'W':
            case 'w':
                player->y = (player->y > 0) ? player->y - 1 : player->y;  // Moves player up, if possible
                break;
            
            case 'A':
            case 'a':
                player->x = (player->x > 0) ? player->x - 1 : player->x;  // Moves player left, if possible
                break;

            case 'S':
            case 's':
                player->y = (player->y < MAP_HEIGHT - 1) ? player->y + 1 : player->y;  // Moves player down, if possible
                break;
            
            case 'D':
            case 'd':
                player->x = (player->x < MAP_WIDTH - 1) ? player->x + 1 : player->x;  // Moves player left, if possible
                break;
            // Using "player->x" is a way to access the 'x' field of the Player struct

            case 'Q':
            case 'q':
                endwin();  // Stops ncurses
                exit(0);  // Exits program
        }
        draw_map(map);  // Redraws the map after player's movement
        draw_player(player);  // Redraws player after movement
        refresh();  // Refreshes the screen

    }
}