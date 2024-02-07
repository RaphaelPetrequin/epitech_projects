/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** my_str_to_word_array_for_int
*/

#include "../my.h"

int is_valid_char_space(char c)
{
    if (c != ' ')
        return (1);
    return (0);
}

int make_nblines_space(const char *str)
{
    int nblines = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_valid_char_space(str[i]) == 0) {
            nblines = nblines + 1;
        }
    }
    return (nblines);
}

int make_lenline_space(const char *str, int line)
{
    int lenline = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_valid_char_space(str[i]) == 1 && line == 0)
            lenline++;
        if (is_valid_char_space(str[i]) != 1)
            line = line - 1;
    }
    return (lenline);
}

char **my_str_to_word_array_for_int(const char *str)
{
    int nblines = make_nblines_space(str);
    char **tab = malloc(sizeof(char *) * (nblines + 1));
    int lenline;
    int i = 0;
    int index;

    tab[nblines] = 0;
    for (int line = 0; line < nblines; line++) {
        index = 0;
        lenline = make_lenline_space(str, line);
        tab[line] = malloc(sizeof(char) * (lenline) + 1);
        for (i; str[i] != '\0' && is_valid_char_space(str[i]) == 1; i++) {
            tab[line][index] = str[i];
            index++;
        }
        tab[line][index] = '\0';
        i++;
    }
    return (tab);
}
