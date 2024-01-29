/*
** EPITECH PROJECT, 2023
** B-CPE-110-STG-1-1-organized-raphael.petrequin
** File description:
** disp
*/

#include "../my.h"

int disp(void *data, char **args)
{
    linked_list_t **head = (linked_list_t **)data;
    linked_list_t *tmp = *head;

    if (len_args(args) != 0)
        exit(84);
    while (tmp != NULL) {
        mini_printf("%s n°%d - \"%s\"\n", tmp->type, tmp->id, tmp->data);
        tmp = tmp->next;
    }
    return (0);
}
