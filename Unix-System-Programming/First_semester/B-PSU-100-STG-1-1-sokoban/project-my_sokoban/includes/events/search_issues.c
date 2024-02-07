/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** search_issues
*/

#include "../my.h"

void check_char(int *nbO, int *nbX, int *nbP, char ch)
{
    if (ch == 'O')
        (*nbO)++;
    if (ch == 'X')
        (*nbX)++;
    if (ch == 'P')
        (*nbP)++;
}

int search_issues(info_game *game)
{
    int nbO = 0;
    int nbX = 0;
    int nbP = 0;

    for (int i = 0; game->map[i] != 0; i++) {
        for (int j = 0; game->map[i][j] != '\0'; j++)
            check_char(&nbO, &nbX, &nbP, game->map[i][j]);
    }
    game->nbO = nbO;
    if ((nbO != nbX) || (nbP != 1) || (nbO <= 0) || (nbX <= 0)) {
        free(game->map);
        exit(84);
    }
}
