/*
** EPITECH PROJECT, 2023
** IFZERO
** File description:
** see if there is 0 on decimals of the float
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int ifzero(double nb, signed long int leftofdot)
{
    double tmpnb = nb - leftofdot;
    signed long int tmp = (signed long int)(tmpnb * 1000000);
    signed long int nbzero = my_intlen(tmp);
    int count = 0;

    my_put_nbr(leftofdot);
    my_putchar('.');
    count = count + 1 + my_intlen(leftofdot);
    if (nbzero < 6) {
        for (nbzero; nbzero < 6; nbzero++) {
            my_putchar('0');
            count++;
        }
    }
    return count;
}
