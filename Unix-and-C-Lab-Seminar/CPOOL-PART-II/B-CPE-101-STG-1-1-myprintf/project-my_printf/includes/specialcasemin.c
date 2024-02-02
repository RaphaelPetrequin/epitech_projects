/*
** EPITECH PROJECT, 2023
** SPECIALCASEMIN
** File description:
** sees if there is a special case inf or nan
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int specialcasemin(double nb)
{
    int count = 0;

    if (nb == (1.0 / 0.0)) {
        my_putstr("inf");
        return (3);
    }
    if (nb == (-1.0 / 0.0)) {
        my_putstr("-inf");
        return (4);
    }
    if (nb != nb && nb > 0) {
        my_putstr("nan");
        return (3);
    } else {
        my_putstr("-nan");
        return (4);
    }
}
