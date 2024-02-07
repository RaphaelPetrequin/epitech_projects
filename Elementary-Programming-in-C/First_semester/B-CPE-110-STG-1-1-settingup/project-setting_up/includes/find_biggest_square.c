/*
** EPITECH PROJECT, 2023
** FIND_BIGGEST_SQUARE
** File description:
** find_biggest_square
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>

static int error_handle(int nb_rows, int nb_cols)
{
    if (nb_rows < 1 || nb_cols < 1)
        exit(84);
    if (nb_rows == 1 || nb_cols == 1)
        exit(0);
}

static int min(int up, int diagonal, int left)
{
    int min = up;

    if (diagonal < min)
        min = diagonal;
    if (left < min)
        min = left;
    return min;
}

int print_square(char **mapchar, coords *coords, int nb_rows, int nb_cols)
{
    if (coords->x == 0 && coords->y == 0) {
        mapchar[coords->x][coords->y] == 'x';
        for (int i = 0; i < nb_rows; i++) {
            write(1, mapchar[i], nb_cols);
            write(1, "\n", 1);
        }
        return (0);
    }
    for (int i = (coords->x - coords->max); i < coords->x; i++) {
        for (int j = (coords->y - coords->max); j < coords->y; j++) {
            mapchar[i][j] = 'x';
        }
    }
    for (int i = 0; i < nb_rows; i++) {
        write(1, mapchar[i], nb_cols);
        write(1, "\n", 1);
    }
}

void search_biggest_square(int **map, coords *coords, int nb_cols, int i)
{
    for (int j = 1; j < nb_cols; j++) {
        if (map[i][j] == 0)
            continue;
        coords->min = min(map[i - 1][j], map[i - 1][j - 1], map[i][j - 1]);
        map[i][j] = coords->min + 1;
        if (map[i][j] > coords->max) {
            coords->max = map[i][j];
            coords->x = i + 1;
            coords->y = j + 1;
        }
    }
}

int find_biggest_square(int **map, int nb_rows, int nb_cols, char **mapchar)
{
    coords coords;

    coords.min = 0;
    coords.max = 0;
    coords.x = 0;
    coords.y = 0;
    error_handle(nb_rows, nb_cols);
    for (int row = 0; row < nb_rows; row++) {
        if (map[row][0] == 1)
            coords.max = 1;
    }
    for (int col = 0; col < nb_cols; col++) {
        if (map[0][col] == 1)
            coords.max = 1;
    }
    for (int i = 1; i < nb_rows; i++)
        search_biggest_square(map, &coords, nb_cols, i);
    print_square(mapchar, &coords, nb_rows, nb_cols);
}
