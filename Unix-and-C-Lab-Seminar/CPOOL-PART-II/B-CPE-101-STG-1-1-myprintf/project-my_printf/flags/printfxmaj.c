/*
** EPITECH PROJECT, 2023
** PRINTFXMAJ
** File description:
** Flag Printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int printfxmaj(va_list list, char subflag, int spaces_o_zero)
{
    char makemaj = '7';
    int nb = va_arg(list, int);
    unsigned int res = nb;
    char str[12];
    int count = 0;

    if (nb == 0) {
        return (is_zero(subflag, spaces_o_zero));
    }
    if (subflag == '#' && nb != 0) {
        my_putstr("0X");
        count++;
    } else if (subflag == '0' && nb != 0) {
        spaces_o_zero = spaces_o_zero - lenhexa(res, str, count, makemaj);
        count = count + put_zerosorspaces(spaces_o_zero, '0');
    }
    count = count + makehexa(res, str, count, makemaj);
    return (count);
}
