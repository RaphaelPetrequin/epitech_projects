/*
** EPITECH PROJECT, 2023
** B-CPE-110-STG-1-1-organized-raphael.petrequin
** File description:
** add
*/

#include "../my.h"

int add(void *data, char **args)
{
    linked_list_t **list = data;
    static int id = 0;

    if (len_args(args) % 2 != 0 || len_args(args) == 0)
        exit(84);
    for (int i = 0; args[i] != NULL; i++) {
        push_to_list(list, args[i], args[i + 1], id);
        mini_printf("%s n°%d - \"%s\" added.\n", args[i], id, args[i + 1]);
        i++;
        id++;
    }
    return (0);
}
