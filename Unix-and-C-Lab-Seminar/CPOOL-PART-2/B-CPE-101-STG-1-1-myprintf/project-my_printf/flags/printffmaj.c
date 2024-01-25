/*
** EPITECH PROJECT, 2023
** PRINTFFMAJ
** File description:
** flag printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int printffmaj(va_list list, char subflag, int spaces_o_zero)
{
    double nb = va_arg(list, double);
    signed long int leftofdot;
    int count = 0;

    if (nb < 0.0 && subflag == ' ') {
        my_putchar('-');
        count++;
        nb = nb * (-1);
    }
    if (subflag != ' ' && nb >= 0.0 || subflag != ' ' && specialcase(nb)) {
        count = count + makesubflagforfloat(subflag, spaces_o_zero, nb);
    }
    if (specialcase(nb) == 1)
        return (count + specialcasemaj(nb));
    leftofdot = (signed long int)nb;
    count = count + ifzero(nb, leftofdot);
    count = count + afterdot(nb, leftofdot);
    return (count);
}
