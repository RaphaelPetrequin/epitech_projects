/*
** EPITECH PROJECT, 2024
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** take_coords
*/

#include "my.h"

char **take_coords(struct stat *st, int fd, char **coords)
{
    char buf[st->st_size];
    ssize_t size = read(fd, buf, sizeof(buf));
    int i = 0;

    coords = my_str_to_word_array_for_radar(buf);
    close(fd);
    return (coords);
}
