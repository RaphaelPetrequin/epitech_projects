/*
** EPITECH PROJECT, 2023
** PRINTFX
** File description:
** flag printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int printfx(va_list list, char subflag, int spaces_o_zero)
{
    char makemin = 'W';
    int nb = va_arg(list, int);
    unsigned int res = nb;
    char str[12];
    int count = 0;

    if (nb == 0) {
        return (is_zero(subflag, spaces_o_zero));
    }
    if (subflag == '#' && nb != 0) {
        my_putstr("0x");
        count++;
    } else if (subflag == '0' && nb != 0) {
        spaces_o_zero = spaces_o_zero - lenhexa(res, str, count, makemin);
        count = count + put_zerosorspaces(spaces_o_zero, '0');
    }
    count = count + makehexa(res, str, count, makemin);
    return (count);
}
