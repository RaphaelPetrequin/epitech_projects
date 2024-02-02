/*
** EPITECH PROJECT, 2023
** is_rush1_1.c
** File description:
** détermlne longueur et largeur de rush1_1
*/

#include "../includes/my.h"

int is_rush1_1(char *buff)
{
    int conth = 0;
    int contlar = 0;
    int i = 0;

    my_putstr("[rush1-1] ");
    for (i; buff[i] != '\n' ; i++)
        contlar++;
    conth++;
    i++;
    for (i; buff[i] == '|' ; i += contlar + 1)
        conth++;
    if (buff[i] == 'o')
        conth++;
    my_put_nbr(contlar);
    my_putchar(' ');
    my_put_nbr(conth);
    my_putchar('\n');
    return (0);
}
