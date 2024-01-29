/*
** EPITECH PROJECT, 2023
** MY
** File description:
** my
*/

#include "coordinates.h"

#ifndef MY_H_
    #define MY_H_

int get_number_from_first_line(char const *filepath);
char *load_file_in_mem(char const *filepath, int);
int openfile(char const *filepath);
char **my_str_to_word_array_for_bsq(const char *str);
int is_valid_char(char c);
char **load_2d_arr_from_file(char const *filepath, int);
char **setting_up(char **map, int nb_rows);
int **make_int_array(char **map, int nb_rows, int nb_cols);
int find_biggest_square(int **map, int nb_rows, int nb_cols, char **);
int my_getnbr(char *str);
int my_strlen(char const *str);

#endif /* !MY_H_ */
