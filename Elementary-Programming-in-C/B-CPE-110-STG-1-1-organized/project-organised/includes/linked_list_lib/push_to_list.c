/*
** EPITECH PROJECT, 2023
** PUSH_TO_LIST
** File description:
** push_to_list
*/

#include "../my.h"

void check_type(void *type)
{
    if (my_strcmp(type, "ACTUATOR") != 0
    && (my_strcmp(type, "DEVICE") != 0)
    && (my_strcmp(type, "PROCESSOR") != 0)
    && (my_strcmp(type, "SENSOR") != 0)
    && (my_strcmp(type, "WIRE") != 0))
        exit(84);
}

void push_to_list(linked_list_t **begin, void *type, void *data, int id)
{
    linked_list_t *element = malloc(sizeof(linked_list_t));
    char *type_name = my_strdup((char *)type);
    char *data_name = my_strdup((char *)data);
    linked_list_t *tmp = *begin;

    check_type(type);
    element->type = type_name;
    element->data = data_name;
    element->id = id;
    element->next = *begin;
    *begin = element;
}

    // if (*begin == NULL) {
    //     *begin = element;
    // } else {
    //     // Traverse the list to find the last element
    //     tmp = *begin;
    //     while (tmp->next != NULL) {
    //         tmp = tmp->next;
    //     }
    //     // Link the new element to the last element
    //     tmp->next = element;
    // }
