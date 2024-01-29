/*
** EPITECH PROJECT, 2023
** LOAD_2D_ARR_FROM_FILE
** File description:
** load_2d_arr_from_file
*/

#include <stdlib.h>
#include "my.h"

char **load_2d_arr_from_file(char const *filepath, int nb_rows)
{
    char *file = load_file_in_mem(filepath, nb_rows);
    char **arrfile;
    int cptr = 0;

    for (int i = 0; file[i] != '\n'; i++)
        cptr++;
    arrfile = my_str_to_word_array_for_bsq(file + cptr + 1);
    return (arrfile);
}
