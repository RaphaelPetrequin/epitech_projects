/*
** EPITECH PROJECT, 2023
** OPENFILE
** File description:
** openfile
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int openfile(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        write(2, "FAILURE\n", 9);
        return (84);
    }
    return (fd);
}
