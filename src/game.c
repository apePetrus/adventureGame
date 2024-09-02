#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include "game.h"

void init_game() {
    initscr();  // Start ncurses mode
    cbreak();  // Deactivate line buffering
    noecho();  // Does not show up typed characters
    keypad(stdscr, TRUE);  // Enables special chars input like arrows
    curs_set(0);  // Hide the cursor
    nodelay(stdscr, TRUE);  // Non-blocking mode for getch()

    printw("Welcome to ASCII RPG!\n");
    printw("Move your characters with W, A, S, D keys.\n");
    refresh();
}

void draw_player(Player *player){
    clear();
    mvprintw(player->y, player->x, "%c", player->symbol);  // Draws player in current position
    refresh();
}

void game_loop(Player *player) {
    int ch = getch();  // Grabs pressed key

    if (ch != ERR) {  // ERR indicates that no key was pressed
        clear();
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
                player->y = (player->y < LINES - 1) ? player->y + 1 : player->y;  // Moves player down, if possible
                break;
            
            case 'D':
            case 'd':
                player->x = (player->x < COLS - 1) ? player->x + 1 : player->x;  // Moves player left, if possible
                break;
            // Using "player->x" is a way to access the 'x' field of the Player struct

            case 'Q':
            case 'q':
                endwin();  // Stops ncurses
                exit(0);  // Exits program
        }
        draw_player(player);  // Redraws player after movement

    }
}