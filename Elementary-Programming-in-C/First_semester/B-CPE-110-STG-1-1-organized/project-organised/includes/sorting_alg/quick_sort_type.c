/*
** EPITECH PROJECT, 2023
** B-CPE-110-STG-1-1-organized-raphael.petrequin
** File description:
** quick_sort_type
*/

#include "../my.h"

void make_change_type(info_tmp *tmp, linked_list_t **start,
    linked_list_t **list)
{
    tmp->type = my_strdup((*start)->type);
    tmp->data = my_strdup((*start)->data);
    tmp->id = (*start)->id;
    (*start)->type = (*list)->type;
    (*start)->data = (*list)->data;
    (*start)->id = (*list)->id;
    (*list)->type = tmp->type;
    (*list)->data = tmp->data;
    (*list)->id = tmp->id;
    (*start) = (*start)->next;
}

linked_list_t *partition_type(linked_list_t *start, linked_list_t *end)
{
    linked_list_t *pivot = start;
    linked_list_t *curr = start;
    info_tmp tmp;

    while (curr != NULL && curr != end) {
        if (my_strcmp(curr->type, end->type) < 0) {
            pivot = start;
            make_change_type(&tmp, &start, &curr);
        }
        curr = curr->next;
    }
    make_change_type(&tmp, &start, &end);
    return pivot;
}

void quick_sort_type(linked_list_t *start, linked_list_t *end)
{
    linked_list_t *pivot;

    if (start == end)
        return;
    pivot = partition_type(start, end);
    if (pivot != NULL && pivot->next != NULL)
        quick_sort_type(pivot->next, end);
    if (pivot != NULL && start != pivot)
        quick_sort_type(start, pivot);
}
