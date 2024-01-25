/*
** EPITECH PROJECT, 2023
** LENFLOAT
** File description:
** returns the len of the float
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../includes/my.h"

int afterdotnoprint(double nb, signed long int leftofdot)
{
    double tmpnb = (nb - leftofdot) * 1000000;
    signed long int rightofdot = (signed long int)(tmpnb + 0.5);
    int count = 0;

    count = count + my_intlen(rightofdot);
    return (count);
}

int ifzeronoprint(double nb, signed long int leftofdot)
{
    double tmpnb = nb - leftofdot;
    signed long int tmp = (signed long int)(tmpnb * 1000000);
    signed long int nbzero = my_intlen(tmp);
    int count = 0;

    count = count + 1 + my_intlen(leftofdot);
    if (nbzero < 6) {
        for (nbzero; nbzero < 6; nbzero++) {
            count++;
        }
    }
    return count;
}

int lenfloat(double nb, signed long int leftofdot)
{
    int count = 0;

    leftofdot = (signed long int)nb;
    count = count + ifzeronoprint(nb, leftofdot);
    count = count + afterdotnoprint(nb, leftofdot);
    return (count);
}
