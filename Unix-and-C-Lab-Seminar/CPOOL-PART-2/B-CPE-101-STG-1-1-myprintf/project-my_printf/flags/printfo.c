/*
** EPITECH PROJECT, 2023
** PRINTFO
** File description:
** flag printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int lenocto(unsigned int res, char *str, int count)
{
    int i;

    for (i = 0; res != 0; i++) {
        str[i] = '0' + (res % 8);
        res = res / 8;
    }
    for (int j = (i - 1); j >= 0; j--) {
        count++;
    }
    return (count);
}

int makeocto(unsigned int res, char *str, int count)
{
    int i;

    for (i = 0; res != 0; i++) {
        str[i] = '0' + (res % 8);
        res = res / 8;
    }
    for (int j = (i - 1); j >= 0; j--) {
        my_putchar(str[j]);
        count++;
    }
    return (count);
}

int printfo(va_list list, char subflag, int spaces_o_zero)
{
    int nb = va_arg(list, int);
    unsigned int res = nb;
    char str[12];
    int count = 0;

    if (nb == 0) {
        return (is_zero(subflag, spaces_o_zero));
    }
    if (subflag == '#' && nb != 0) {
        my_putchar('0');
        count++;
    } else if (subflag == '0' && nb != 0) {
        spaces_o_zero = spaces_o_zero - lenocto(res, str, count);
        count = count + put_zerosorspaces(spaces_o_zero, '0');
    }
    count = count + makeocto(res, str, count);
    return (count);
}
