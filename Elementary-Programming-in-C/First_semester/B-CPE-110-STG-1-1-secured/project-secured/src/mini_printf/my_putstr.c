/*
** EPITECH PROJECT, 2023
** MY_PUTSTR
** File description:
** displays str
*/

#include "../../include/hashtable.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}
