/*
** EPITECH PROJECT, 2023
** SPECIALCASEMAJ
** File description:
** see if there is a inf or nan
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int specialcasemaj(double nb)
{
    int count = 0;

    if (nb == (1.0 / 0.0)) {
        my_putstr("INF");
        return (3);
    }
    if (nb == (-1.0 / 0.0)) {
        my_putstr("-INF");
        return (4);
    }
    if (nb != nb && nb > 0) {
        my_putstr("NAN");
        return (3);
    } else {
        my_putstr("-NAN");
        return (4);
    }
}
