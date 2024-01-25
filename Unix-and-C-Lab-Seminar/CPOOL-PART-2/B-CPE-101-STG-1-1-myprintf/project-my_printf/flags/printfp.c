/*
** EPITECH PROJECT, 2023
** PRINTFP
** File description:
** flag printfp
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int printfp(va_list list, char subflag, int spaces_o_zero)
{
    char makemin = 'W';
    long res = va_arg(list, long);
    char str[12];
    int count;

    if (res == 0) {
        my_putstr("(nil)");
        count = 5;
    } else {
        my_putstr("0x");
        count = 2;
        count = count + makelonghexa(res, str, makemin);
    }
    return (count);
}
