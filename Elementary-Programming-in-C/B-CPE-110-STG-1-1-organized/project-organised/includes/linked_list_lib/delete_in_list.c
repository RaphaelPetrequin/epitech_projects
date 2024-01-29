/*
** EPITECH PROJECT, 2023
** DELETE_IN_LIST
** File description:
** delete_in_list
*/

#include "../my.h"

int compare_function(int data, int ref)
{
    if (data == ref)
        return (1);
    return (0);
}

void move_node(linked_list_t **begin, linked_list_t *prev,
    linked_list_t *curr)
{
    if (prev == NULL)
        *begin = curr->next;
    else
        prev->next = curr->next;
}

void delete_in_list(linked_list_t **begin, int ref)
{
    linked_list_t *curr = (*begin);
    linked_list_t *prev = NULL;
    char *type = curr->type;
    char *data = curr->data;

    while (curr != NULL) {
        if (compare_function(curr->id, ref) == 1) {
            move_node(begin, prev, curr);
            mini_printf("%s n°%d - \"%s\" deleted.\n", type, ref, data);
            free(curr);
            curr = (prev == NULL) ? *begin : prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
}
