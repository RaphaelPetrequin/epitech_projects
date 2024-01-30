/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** load_2d_arr_from_file
*/

#include "../my.h"

char **load_2d_arr_from_file(char const *filepath)
{
    char *file = load_file_in_mem(filepath);
    char **arrfile;
    int cptr = 0;

    arrfile = my_str_to_word_array_for_sokoban(file);
    free(file);
    return (arrfile);
}
