/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** moving_perso
*/

#include "../my.h"

void go_up(info_game *game)
{
    int x = game->p_pos[0];
    int y = game->p_pos[1];

    if (game->key == KEY_UP && (x - 1) >= 0
    && (game->map[x - 1][y] == 'X' || game->map[x - 1][y] == 'O'
    || game->map[x - 1][y] == ' ')) {
        if (game->map[x - 1][y] == 'X') {
            handle_boxes_go_up(game->map, x, y, game->p_pos);
            return;
        }
        game->map[x - 1][y] = 'P';
        if (game->ref_map[x][y] == 'O') {
            game->map[x][y] = 'O';
            game->p_pos[0]--;
            return;
        }
        game->map[x][y] = ' ';
        game->p_pos[0]--;
    }
}

void go_down(info_game *game)
{
    int x = game->p_pos[0];
    int y = game->p_pos[1];

    if (game->key == KEY_DOWN && (x + 1) <= (search_nbrows(game->map) - 1)
    && (game->map[x + 1][y] == 'X' || game->map[x + 1][y] == 'O'
    || game->map[x + 1][y] == ' ')) {
        if (game->map[x + 1][y] == 'X') {
            handle_boxes_go_down(game->map, x, y, game->p_pos);
            return;
        }
        game->map[x + 1][y] = 'P';
        if (game->ref_map[x][y] == 'O') {
            game->map[x][y] = 'O';
            game->p_pos[0]++;
            return;
        }
        game->map[x][y] = ' ';
        game->p_pos[0]++;
    }
}

void go_left(info_game *game)
{
    int x = game->p_pos[0];
    int y = game->p_pos[1];

    if (game->key == KEY_LEFT
    && (game->map[x][y - 1] == 'X' || game->map[x][y - 1] == 'O'
    || game->map[x][y - 1] == ' ')) {
        if (game->map[x][y - 1] == 'X') {
            handle_boxes_go_left(game->map, x, y, game->p_pos);
            return;
        }
        game->map[x][y - 1] = 'P';
        if (game->ref_map[x][y] == 'O') {
            game->map[x][y] = 'O';
            game->p_pos[1]--;
            return;
        }
        game->map[x][y] = ' ';
        game->p_pos[1]--;
    }
}

void go_right(info_game *game)
{
    int x = game->p_pos[0];
    int y = game->p_pos[1];

    if (game->key == KEY_RIGHT
    && (game->map[x][y + 1] == 'X' || game->map[x][y + 1] == 'O'
    || game->map[x][y + 1] == ' ')) {
        if (game->map[x][y + 1] == 'X') {
            handle_boxes_go_right(game->map, x, y, game->p_pos);
            return;
        }
        game->map[x][y + 1] = 'P';
        if (game->ref_map[x][y] == 'O') {
            game->map[x][y] = 'O';
            game->p_pos[1]++;
            return;
        }
        game->map[x][y] = ' ';
        game->p_pos[1]++;
    }
}
