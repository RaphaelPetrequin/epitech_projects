/*
** EPITECH PROJECT, 2023
** PRINTFM
** File description:
** flag printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int printfm(va_list list, char subflag, int spaces_o_zero)
{
    int count = 0;

    my_putchar('%');
    count++;
    return (count);
}
