/*
** EPITECH PROJECT, 2023
** B-CPE-110-STG-1-1-organized-raphael.petrequin
** File description:
** sort
*/

#include "../my.h"

void search_flags(char **args, linked_list_t *start, linked_list_t *end,
    linked_list_t **head)
{
    for (int i = 0; args[i] != NULL; i++) {
        if (my_strcmp(args[i], "NAME") == 0)
            quick_sort_name(start, end);
        if (my_strcmp(args[i], "TYPE") == 0)
            quick_sort_type(start, end);
        if (my_strcmp(args[i], "ID") == 0)
            quick_sort_id(start, end);
        if (my_strcmp(args[i], "-r") == 0)
            return;
    }
}

int sort(void *data, char **args)
{
    linked_list_t **head = (linked_list_t **)data;
    linked_list_t *end = *head;
    linked_list_t *start = *head;

    if (args[0] == 0)
        exit(84);
    while (end->next != NULL)
        end = end->next;
    search_flags(args, start, end, head);
    return (0);
}
