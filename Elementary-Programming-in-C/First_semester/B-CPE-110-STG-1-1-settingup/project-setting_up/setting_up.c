/*
** EPITECH PROJECT, 2023
** SETTING_UP
** File description:
** setting_up
*/

#include <stdlib.h>
#include "includes/my.h"

static void change_ptr(int *ptr, int len)
{
    if (*ptr >= len)
        *ptr = 0;
}

char **make_square(char *strnb, char *patern)
{
    int ptr = 0;
    int nb = my_getnbr(strnb);
    int len = my_strlen(patern);
    char **map = malloc(sizeof(char *) * (nb + 1));
    int j = 0;

    map[nb] = 0;
    for (int i = 0; i < nb; i++)
        map[i] = malloc(sizeof(char) * (nb + 1));
    for (int i = 0; i < nb; i++) {
        for (j = 0; j < nb; j++) {
            map[i][j] = patern[ptr];
            ptr++;
            change_ptr(&ptr, len);
        }
        map[i][j] = '\0';
    }
    return (map);
}

int is_num(char *str)
{
    int tmp = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            tmp = 1;
        else
            exit(84);
    }
    return (tmp);
}

int get_cols(char **map, int nb_rows)
{
    int cpt = 0;

    for (int j = 0; map[0][j] != '\0'; j++) {
        cpt++;
    }
    return (cpt);
}

char **setting_up(char **map, int nb_rows)
{
    int nb_cols = get_cols(map, nb_rows);
    int **mapint = make_int_array(map, nb_rows, nb_cols);

    find_biggest_square(mapint, nb_rows, nb_cols, map);
}

int main(int ac, char **av)
{
    char **map;
    int nb_rows;

    if (ac == 2) {
        nb_rows = get_number_from_first_line(av[1]);
        map = load_2d_arr_from_file(av[1], nb_rows);
        setting_up(map, nb_rows);
    } else if (ac == 3) {
        is_num(av[1]);
        nb_rows = my_getnbr(av[1]);
        map = make_square(av[1], av[2]);
        setting_up(map, nb_rows);
    } else {
        return (84);
    }
}
