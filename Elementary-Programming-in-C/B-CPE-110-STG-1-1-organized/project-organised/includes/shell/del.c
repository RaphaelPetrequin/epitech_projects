/*
** EPITECH PROJECT, 2023
** B-CPE-110-STG-1-1-organized-raphael.petrequin
** File description:
** del
*/

#include "../my.h"

int is_in_list(linked_list_t **head, char *arg, int id)
{
    linked_list_t *tmp = *head;

    for (int i = 0; tmp != NULL; i++) {
        if (my_strlen(arg) != 1 && my_getnbr(arg) == 0)
            exit(84);
        if (tmp->id == id)
            return (1);
        tmp = tmp->next;
    }
    return (0);
}

int del(void *data, char **args)
{
    linked_list_t **head = (linked_list_t **)data;
    int id;

    if (args[0] == 0)
        exit(84);
    for (int i = 0; args[i] != NULL; i++) {
        id = my_getnbr(args[i]);
        if (is_in_list(head, args[i], id) != 1)
            exit(84);
    }
    for (int i = 0; args[i] != NULL; i++) {
        id = my_getnbr(args[i]);
        delete_in_list(head, id);
    }
}
