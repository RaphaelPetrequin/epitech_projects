/*
** EPITECH PROJECT, 2023
** PRINTFE
** File description:
** flag printf
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int isneg_or_zeromaj(double nb, char subflag)
{
    if (nb < 0.0 || nb < 0.0 && (subflag != '+' && specialcase(nb))) {
        my_putchar('-');
        nb = nb * (-1);
        return (1);
    }
    if (nb == 0.0 && subflag != '+') {
        my_putstr("0.000000E+00");
        return (12);
    }
    if (nb == 0.0 && subflag == '+') {
        my_putstr("+0.000000E+00");
        return (13);
    }
}

int printexpomaj(double temp, int countnb)
{
    int count = 0;

    my_putchar('E');
    count++;
    if (temp < 1 && temp > -1) {
        my_putchar('-');
        count++;
    } else {
        my_putchar('+');
        count++;
    }
    if (countnb < 10) {
        my_putchar('0');
        count++;
    }
    my_put_nbr(countnb);
    count = count + my_intlen(countnb);
    return (count);
}

int printfemaj(va_list list, char subflag, int spaces_o_zero)
{
    double nb = va_arg(list, double);
    signed long int leftofdot;
    int count = 0;
    int countnb = 0;
    double temp = nb;

    if (nb == 0.0 || nb < 0.0 && specialcase(nb) != 1)
        return (isneg_or_zeromaj(nb, subflag));
    if (subflag != ' ' && nb >= 0.0 || subflag != ' ' && specialcase(nb)) {
        count = count + makesubflagfor_e_emaj(subflag, spaces_o_zero, nb);
    }
    if (specialcase(nb) == 1)
        return (count + specialcasemaj(nb));
    countnb = nombreexpo(&nb);
    leftofdot = (signed long int)nb;
    count = count + ifzero(nb, leftofdot);
    count = count + afterdot(nb, leftofdot);
    count = count + printexpomaj(temp, countnb);
    return (count);
}
