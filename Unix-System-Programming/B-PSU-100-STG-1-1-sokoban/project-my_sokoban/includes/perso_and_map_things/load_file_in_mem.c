/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** load_file_in_mem
*/

#include "../my.h"

void test_buffer(char *buffer, int size)
{
    for (int i = 0; i < size; i++) {
        if (buffer[i] != '\n' && buffer[i] != '#' && buffer[i] != 'X'
        && buffer[i] != 'O' && buffer[i] != 'P' && buffer[i] != ' ')
            exit(84);
    }
}

int openfile(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        write(2, "FAILURE\n", 9);
        return (84);
    }
    return (fd);
}

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
    test_buffer(buffer, size);
}

char *load_file_in_mem(char const *filepath)
{
    struct stat *st = malloc(sizeof(struct stat) + 1);
    int size = add_size_for_buf(filepath, st);
    char *buffer = malloc(sizeof(char) * size + 1);

    put_file(filepath, buffer, size);
    return (buffer);
}
