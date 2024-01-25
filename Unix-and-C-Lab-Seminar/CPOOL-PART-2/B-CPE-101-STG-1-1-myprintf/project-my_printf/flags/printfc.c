/*
** EPITECH PROJECT, 2023
** PRINTFC
** File description:
** flag printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int printfc(va_list list, char subflag, int spaces_o_zero)
{
    int c = va_arg(list, int);
    int count = 0;

    my_putchar(c);
    count++;
    return (count);
}
