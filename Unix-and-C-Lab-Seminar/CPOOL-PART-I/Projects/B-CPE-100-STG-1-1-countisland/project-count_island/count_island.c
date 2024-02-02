/*
** EPITECH PROJECT, 2023
** COUNT_ISLAND
** File description:
** Counts the nb of islands
*/

#include "include/my.h"
#include <stdio.h>

int count(char **world, int x, int y, int cpt)
{
    if (x < 0 || y < 0 || world[x][y] != 'X') {
        return (0);
    }
    world[x][y] = cpt + '0';
    if (world[x][y + 1] != '\0') {
        count(world, x, (y + 1), cpt);
    }
    if (y > 0) {
        count(world, x, (y - 1), cpt);
    }
    if (world[x + 1] != NULL) {
        count(world, (x + 1), y, cpt);
    }
    if (x > 0) {
        count(world, (x - 1), y, cpt);
    }
    return (0);
}

int is_there_an_island(char **world, int x, int y, int cpt)
{
    if (world[x][y] == 'X') {
        count(world, x, y, cpt);
        cpt++;
    }
    return (cpt);
}

int count_island(char **world)
{
    int cpt = 0;

    for (int x = 0; world[x] != NULL; x++) {
        for (int y = 0; world[x][y] != '\0'; y++) {
            cpt = is_there_an_island(world, x, y, cpt);
        }
    }
    return (cpt);
}
