/*
** EPITECH PROJECT, 2023
** make_int_array
** File description:
** make_int_array
*/

#include <stdlib.h>

int search_char(char map)
{
    if (map == 'o')
        return (0);
    if (map == '.')
        return (1);
    if (map != 'o' && map != '.')
        exit(84);
}

int **make_int_array(char **map, int nb_rows, int nb_cols)
{
    int **map_int;
    int col = 0;

    map_int = malloc(sizeof(int *) * (nb_rows + 1));
    map_int[nb_rows] = 0;
    for (int row = 0; row < nb_rows; row++) {
        map_int[row] = malloc(sizeof(int) * (nb_cols + 1));
        for (col = 0; col < nb_cols; col++) {
            map_int[row][col] = search_char(map[row][col]);
        }
        map_int[row][nb_cols] = -1;
        col = 0;
    }
    return map_int;
}
