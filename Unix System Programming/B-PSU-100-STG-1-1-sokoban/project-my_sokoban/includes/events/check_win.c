/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** check_win
*/

#include "../my.h"

int change_tmp(info_game *game, int tmp, int i, int j)
{
    if (game->map[i][j] == 'X' && game->ref_map[i][j] == 'O')
        tmp--;
    return tmp;
}

int is_all_covered(info_game *game)
{
    int tmp = game->nbO;

    for (int i = 0; game->map[i] != 0; i++) {
        for (int j = 0; game->map[i][j] != '\0'; j++)
            tmp = change_tmp(game, tmp, i, j);
    }
    if (tmp == 0)
        return (1);
    return (0);
}

void check_win(info_game *game)
{
    int nbO = 0;
    int nbX = 0;
    int nbP = 0;

    for (int i = 0; game->map[i] != 0; i++) {
        for (int j = 0; game->map[i][j] != '\0'; j++)
            check_char(&nbO, &nbX, &nbP, game->map[i][j]);
    }
    if (nbO == 0 && is_all_covered(game) == 1) {
        display_game(game);
        game->key = 27;
    }
}
