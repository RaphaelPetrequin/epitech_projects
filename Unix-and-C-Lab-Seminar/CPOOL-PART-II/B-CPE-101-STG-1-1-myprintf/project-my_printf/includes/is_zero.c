/*
** EPITECH PROJECT, 2023
** IS_ZERO
** File description:
** check if the subflag is zero
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int is_zero(char subflag, int spaces_o_zero)
{
    if (subflag != '0') {
        my_put_nbr(0);
        return (1);
    } else {
        return (put_zerosorspaces(spaces_o_zero, '0'));
    }
}
