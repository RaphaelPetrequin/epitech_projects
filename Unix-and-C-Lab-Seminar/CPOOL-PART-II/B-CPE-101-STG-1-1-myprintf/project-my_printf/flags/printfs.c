/*
** EPITECH PROJECT, 2023
** PRINTFS
** File description:
** flag printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int printfs(va_list list, char subflag, int spaces_o_zero)
{
    char *str = va_arg(list, char *);
    int count;

    my_putstr(str);
    return (my_strlen(str));
}
