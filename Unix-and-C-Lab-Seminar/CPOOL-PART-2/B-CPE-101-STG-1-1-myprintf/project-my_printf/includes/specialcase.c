/*
** EPITECH PROJECT, 2023
** SPECIALCASE
** File description:
** sees if there is a special case for f and fmaj
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int specialcase(double nb)
{
    if (nb == (1.0 / 0.0))
        return (1);
    if (nb == (-0.1 / 0.0))
        return (1);
    if (nb != nb)
        return (1);
    return (0);
}
