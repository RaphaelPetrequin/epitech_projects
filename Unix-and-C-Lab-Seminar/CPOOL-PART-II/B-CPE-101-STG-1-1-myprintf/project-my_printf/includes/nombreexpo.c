/*
** EPITECH PROJECT, 2023
** NOMBREEXPO
** File description:
** find the val of the exp
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int nombreexpo(double *nb)
{
    int countnb = 0;
    double *ptrnb = nb;

    for (; *ptrnb < 1; countnb++) {
        *ptrnb = *ptrnb * 10;
    }
    for (; *ptrnb >= 10; countnb++) {
        *ptrnb = *ptrnb / 10;
    }
    return (countnb);
}
