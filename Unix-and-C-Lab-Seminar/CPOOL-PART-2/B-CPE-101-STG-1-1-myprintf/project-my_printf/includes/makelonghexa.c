/*
** EPITECH PROJECT, 2023
** MAKEEXA
** File description:
** make the exa of res
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int makelonghexa(long res, char *str, char majmin)
{
    int i;
    int count = 0;

    for (i = 0; res != 0; i++) {
        if ((res % 16) > 9) {
            str[i] = majmin + (res % 16);
            res = res / 16;
        } else {
            str[i] = '0' + (res % 16);
            res = res / 16;
        }
    }
    for (int j = (i - 1); j >= 0; j--) {
        my_putchar(str[j]);
        count++;
    }
    return (count);
}
