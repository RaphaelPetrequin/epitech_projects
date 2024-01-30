/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** search_nbrows
*/

#include "../my.h"

int search_nbrows(char **map)
{
    int nb_rows = 0;

    for (int i = 0; map[i] != 0; i++)
        nb_rows++;
    return (nb_rows);
}
