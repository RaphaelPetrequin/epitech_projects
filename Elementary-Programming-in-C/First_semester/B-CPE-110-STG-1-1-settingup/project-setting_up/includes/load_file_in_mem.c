/*
** EPITECH PROJECT, 2023
** LOAD_FILE_IN_MEM
** File description:
** load_file_in_mem
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int add_size_for_buf(char const *filepath, struct stat *st)
{
    int size = 0;

    stat(filepath, st);
    size = st->st_size;
    if (size == 0)
        exit(84);
    return (size);
}

void put_file(char const *filepath, char *buffer, int size)
{
    int fd = openfile(filepath);
    int text = read(fd, buffer, size);

    if (text == -1) {
        write(2, "FAILURE\n", 9);
        exit(84);
    }
    buffer[size] = '\0';
}

void check_nb(int nb, char *buffer)
{
    int cpt = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n')
            cpt++;
    }
    if ((cpt - 1) != nb)
        exit(84);
}

char *load_file_in_mem(char const *filepath, int nb_rows)
{
    struct stat *st = malloc(sizeof(struct stat) + 1);
    int size = add_size_for_buf(filepath, st);
    char *buffer = malloc(sizeof(char) * size + 1);

    put_file(filepath, buffer, size);
    check_nb(nb_rows, buffer);
    return (buffer);
}
