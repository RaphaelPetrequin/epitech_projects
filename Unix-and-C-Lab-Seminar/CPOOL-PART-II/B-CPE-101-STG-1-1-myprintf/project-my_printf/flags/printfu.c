/*
** EPITECH PROJECT, 2023
** PRINTFU
** File description:
** flag printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int is_subflag(int subflag, int spaces_o_zero, int minus)
{
    int count = 0;

    if (subflag == '0') {
        spaces_o_zero = spaces_o_zero - minus;
        count = count + put_zerosorspaces(spaces_o_zero, '0');
    }
    return (count);
}

int printfu(va_list list, char subflag, int spaces_o_zero)
{
    int nb = va_arg(list, int);
    int count = 0;
    unsigned int res;

    if (nb < 0) {
        res = 4294967296 + nb;
        count = my_unsigned_intlen(nb);
        count = count + is_subflag(subflag, spaces_o_zero, count);
        my_put_unsigned_nbr(res);
    } else {
        count = my_intlen(nb);
        count = count + is_subflag(subflag, spaces_o_zero, count);
        my_put_nbr(nb);
    }
    return (count);
}
