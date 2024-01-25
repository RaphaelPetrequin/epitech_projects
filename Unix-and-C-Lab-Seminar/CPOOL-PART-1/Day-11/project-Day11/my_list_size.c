/*
** EPITECH PROJECT, 2023
** MY_LIST_SIZE
** File description:
** Returns the nb of elt on the list
*/

#include "include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    linked_list_t *element;
    int res = 0;

    element = begin;
    while (element) {
        element = element->next;
        res++;
    }
    return (res);
}
