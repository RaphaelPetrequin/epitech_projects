/*
** EPITECH PROJECT, 2023
** MY_PARAMS_TO_LIST
** File description:
** Creates a list made of the arguments
*/

#include <stdlib.h>
#include <stddef.h>
#include "include/my.h"
#include "include/mylist.h"

int my_put_in_list(linked_list_t **list, char *data)
{
    linked_list_t *element;

    element = malloc(sizeof(*element));
    element->data = data;
    element->next = *list;
    *list = element;
    return (0);
}

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *list = NULL;

    for (int i = 0; i < ac; i++) {
        my_put_in_list(&list, av[i]);
    }
    return (list);
}
