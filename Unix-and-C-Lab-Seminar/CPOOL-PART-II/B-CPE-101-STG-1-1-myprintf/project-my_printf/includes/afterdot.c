/*
** EPITECH PROJECT, 2023
** AFTERDOT
** File description:
** put nb ofter the dot of a float
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int afterdot(double nb, signed long int leftofdot)
{
    double tmpnb = (nb - leftofdot) * 1000000;
    signed long int rightofdot = (signed long int)(tmpnb + 0.5);
    int count = 0;

    count = count + my_intlen(rightofdot);
    my_put_nbr(rightofdot);
    return (count);
}
