/*
** EPITECH PROJECT, 2023
** LEN_E_EMAJ
** File description:
** finds the len of e and emaj
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int afterdotenoprint(double nb, signed long int leftofdot)
{
    double tmpnb = (nb - leftofdot) * 1000000;
    signed long int rightofdot = (signed long int)(tmpnb + 0.5);
    int count = 0;

    count = count + my_intlen(rightofdot);
    return (count);
}

int ifzeroenoprint(double nb, signed long int leftofdot)
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

int printexpominnoprint(double temp, int countnb)
{
    int count = 0;

    count++;
    if (temp < 1 && temp > -1) {
        count++;
    } else {
        count++;
    }
    if (countnb < 10) {
        count++;
    }
    count = count + my_intlen(countnb);
    return (count);
}

int len_e_emaj(double nb, signed long int leftofdot)
{
    int count = 0;
    int countnb = nombreexpo(&nb);
    double temp = nb;

    leftofdot = (signed long int)nb;
    count = count + ifzeroenoprint(nb, leftofdot);
    count = count + afterdotenoprint(nb, leftofdot);
    count = count + printexpominnoprint(temp, countnb);
    return (count);
}
