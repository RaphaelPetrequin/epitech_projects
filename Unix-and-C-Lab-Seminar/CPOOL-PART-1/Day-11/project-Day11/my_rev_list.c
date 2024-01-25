/*
** EPITECH PROJECT, 2023
** MY_REV_LIST
** File description:
** Rev the order of the list's elts
*/

#include <stdlib.h>
#include <stddef.h>
#include "include/my.h"
#include "include/mylist.h"

void my_show_list(linked_list_t *list)
{
	struct linked_list *tmp;

	tmp = list;
	while (tmp != NULL) {
		my_putstr(tmp->data);
		my_putchar('\n');
		tmp = tmp->next;
	}
}

linked_list_t *my_rev_list(linked_list_t **begin)
{
    linked_list_t *save = *begin;
    linked_list_t *tmp = NULL;
    linked_list_t *tmpnext;

    while (save->next != NULL) {
	    tmpnext = save;
        save = tmp;
        tmp = tmpnext;
    }
}

int main (int ac, char **av)
{
	linked_list_t *list = NULL;

        list = my_params_to_list(ac, av);
        list = my_rev_list(list);
    	m_show_list(list);
}
