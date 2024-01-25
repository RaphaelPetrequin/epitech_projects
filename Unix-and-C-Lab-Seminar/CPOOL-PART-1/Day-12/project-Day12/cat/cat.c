/*
** EPITECH PROJECT, 2023
** CAT
** File description:
** Reproduce cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"

int noarg(void)
{
    int end = 1;
    char buffer[30000];

    while (end != 0) {
        end = read(0, buffer, 29999);
        buffer[end] = '\0';
        my_putstr(buffer);
    }
    return (0);
}

int make_cat(int fd)
{
    int end = 1;
    char buffer[30000];

    while (end != 0) {
        end = read(fd, buffer, 29999);
        buffer[end] = '\0';
        write(1, buffer, end);
    }
    return (0);
}

int main(int ac, char **av)
{
    int fd;
    int i = 0;

    if (ac == 1) {
        noarg();
    }
    for (i = 1; i < ac; i++) {
        fd = open(av[i], O_RDONLY, S_IRWXU);
        if (fd == -1) {
            my_putstr("Error with open\n");
            return (84);
        } else {
            make_cat(fd);
            close(fd);
        }
    }
    return (0);
}
