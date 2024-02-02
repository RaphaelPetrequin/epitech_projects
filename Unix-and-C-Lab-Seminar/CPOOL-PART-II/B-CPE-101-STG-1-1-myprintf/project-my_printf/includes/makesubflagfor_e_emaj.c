/*
** EPITECH PROJECT, 2023
** MAKESUBFLAGFOR_E_EMAJ
** File description:
** makes subflag for falg e and emaj
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int ifspecialecase_e_emaj(double nb)
{
    int count = 0;

    if (nb == (1.0 / 0.0)) {
        count = count + 3;
    } else {
        if (nb > 0) {
            count = count + 3;
        } else {
            count = count + 4;
        }
    }
    return (count);
}

int makesubflagfor_e_emaj(char subflag, int spaces_o_zero, double nb)
{
    signed long int leftofdot = (signed long int)nb;

    if (subflag == '+' && nb > 0) {
        my_putchar('+');
        return (1);
    } else if (subflag == '+' && nb < 0) {
        return (0);
    }
    if (subflag == '0' && specialcase(nb) != 1) {
        spaces_o_zero = spaces_o_zero - (len_e_emaj(nb, leftofdot));
        return (put_zerosorspaces(spaces_o_zero, '0'));
    } else {
        spaces_o_zero = spaces_o_zero - ifspecialecase_e_emaj(nb);
        return (put_zerosorspaces(spaces_o_zero, ' '));
    }
}
