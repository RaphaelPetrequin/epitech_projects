/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** display_enlarge_terminal
*/

#include "../my.h"

void display_enlarge_terminal(info_game *game, struct winsize *ws)
{
    char msg[] = "Please, enlarge the terminal";

    clear();
    if (ws->ws_col < game->map_x || ws->ws_row < game->map_y) {
        mvprintw(LINES / 2, (COLS - my_strlen(msg)) / 2, "%s", msg);
        refresh();
    }
}
