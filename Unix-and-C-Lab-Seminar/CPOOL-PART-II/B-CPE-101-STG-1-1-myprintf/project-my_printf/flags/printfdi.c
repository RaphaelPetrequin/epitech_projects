/*
** EPITECH PROJECT, 2023
** PRINTFDI
** File description:
** flag printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int printfdi(va_list list, char subflag, int spaces_o_zero)
{
    int nb = va_arg(list, int);
    int count = 0;

    if (subflag == '+' && nb >= 0) {
        my_putchar('+');
        count++;
    }
    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        count++;
    }
    if (subflag == '0' && nb >= 0) {
        spaces_o_zero = spaces_o_zero - (my_intlen(nb) + count);
        count = count + put_zerosorspaces(spaces_o_zero, '0');
    }
    my_put_nbr(nb);
    count = count + my_intlen(nb);
    return (count);
}
