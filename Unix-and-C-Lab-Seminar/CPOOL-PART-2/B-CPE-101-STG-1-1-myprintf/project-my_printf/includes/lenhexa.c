/*
** EPITECH PROJECT, 2023
** PRINTFX
** File description:
** flag printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int lenhexa(unsigned int res, char *str, int count, char majmin)
{
    int i;

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
        count++;
    }
    return (count);
}
