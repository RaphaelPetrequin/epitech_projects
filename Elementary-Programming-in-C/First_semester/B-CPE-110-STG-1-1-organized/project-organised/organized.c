/*
** EPITECH PROJECT, 2023
** B-CPE-110-STG-1-1-bsorganized-raphael.petrequin
** File description:
** organised
*/

#include "includes/my.h"

int main(int ac, char **av)
{
    static linked_list_t *list = NULL;

    workshop_shell(&list);
    while (list != NULL) {
        free(list->data);
        free(list->type);
        list = list->next;
    }
}
