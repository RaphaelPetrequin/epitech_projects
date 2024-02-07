/*
** EPITECH PROJECT, 2023
** GET_NUMBER_FROM_FIRST_LINE
** File description:
** get_number_from_first_line
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int get_len(int fd)
{
    char buffer[1];
    int ln = 0;
    int end = 1;

    for (int i = 0; end != 0; i++) {
        end = read(fd, buffer, 1);
        if (*buffer <= '0' && *buffer >= '9')
            exit(84);
        if (*buffer != '\n')
            ln++;
        if (*buffer == '\n')
            end = 0;
    }
    return (ln);
}

int get_number_from_first_line(char const *filepath)
{
    int fd = openfile(filepath);
    int fd2 = openfile(filepath);
    int ln = get_len(fd);
    char buffer[ln];
    int nb = 0;

    read(fd2, buffer, ln);
    buffer[ln] = '\0';
    nb = my_getnbr(buffer);
    if (nb == 0 || nb < 0)
        exit(84);
    close(fd);
    return (nb);
}
