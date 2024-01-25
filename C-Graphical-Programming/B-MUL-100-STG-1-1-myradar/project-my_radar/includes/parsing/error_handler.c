/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** error_handler
*/

#include "../my.h"

int error_handler(int ac, char *av, int fd, struct stat *st)
{
    if (fd == -1 || stat(av, st) == -1) {
        write(2, "script not found or incorrect\n", 31);
        close(fd);
        return (84);
    }
    return (0);
}
