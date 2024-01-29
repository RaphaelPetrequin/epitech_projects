/*
** EPITECH PROJECT, 2023
** B-CPE-110-STG-1-1-organized-raphael.petrequin
** File description:
** len_list
*/

#include "../my.h"

int len_list(linked_list_t *list)
{
    int cpt = 0;
    linked_list_t *tmp = list;

    while (tmp != NULL) {
        cpt++;
        tmp = tmp->next;
    }
    return (cpt);
}
