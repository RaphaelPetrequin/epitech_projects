/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-myls-raphael.petrequin
** File description:
** make_my_ls_t
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include "../includes/my.h"

int comp(char **fname, int index, int j)
{
    struct stat stat1;
    struct stat stat2;

    if (lstat(fname[index], &stat1) == -1 || lstat(fname[j], &stat2) == -1) {
        return index;
    }
    if (stat1.st_mtime > stat2.st_mtime) {
        index = j;
    }
    return (index);
}

char **get_in_time_order(struct dirent *entries, char *dirpath, char **fname)
{
    DIR *dir = opendir(dirpath);
    int size = get_nbname(fname, entries, dir);
    int index;
    int j;
    char *tmp;

    for (int i = 0; i < size - 1; i++) {
        index = i;
        for (j = i + 1; j < size; j++) {
            index = comp(fname, index, j);
        }
        if (index != i) {
            tmp = fname[i];
            fname[i] = fname[index];
            fname[index] = tmp;
        }
    }
    return (fname);
}

int make_my_ls_t(struct dirent *entries, char *dirpath)
{
    DIR *dir = opendir(dirpath);
    char **filesname = get_files_names(entries, dirpath);

    if (dir == NULL)
        exit(84);
    filesname = get_in_time_order(entries, dirpath, filesname);
    entries = readdir(dir);
    for (int curr = 0; entries != NULL; curr++) {
        if (filesname[curr][0] != '.')
            mini_printf("%s", filesname[curr]);
        entries = readdir(dir);
        if (entries != NULL && filesname[curr][0] != '.')
            mini_printf("  ");
    }
    mini_printf("\n");
}
