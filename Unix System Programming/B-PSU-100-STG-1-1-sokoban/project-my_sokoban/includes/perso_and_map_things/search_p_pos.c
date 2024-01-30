/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** search_p_pos
*/

#include "../my.h"

void is_p_pos(char pos, int x, int y, int *p_pos)
{
    if (pos == 'P') {
        p_pos[0] = x;
        p_pos[1] = y;
    }
}

int *search_p_pos(char **map)
{
    int *p_pos = malloc(sizeof(int) * 3);

    p_pos[2] = -1;
    for (int x = 0; map[x] != 0; x++)
        for (int y = 0; map[x][y] != '\0'; y++)
            is_p_pos(map[x][y], x, y, p_pos);
    return (p_pos);
}
