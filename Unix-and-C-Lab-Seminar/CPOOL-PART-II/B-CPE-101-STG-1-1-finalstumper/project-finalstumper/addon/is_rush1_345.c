/*
** EPITECH PROJECT, 2023
** is_rush1_345.c
** File description:
** renvoie longueur et largeur des rushs 3,4 et 5
*/

#include "../includes/my.h"

static int printstr(int contlar, int conth)
{
    my_put_nbr(contlar);
    my_putchar(' ');
    my_put_nbr(conth);
    my_putchar('\n');
}

int ligneb(int i)
{
    for (int c = 3 ; c <= 5 ; c++) {
        my_putstr("[rush1-");
        my_put_nbr(c);
        my_putstr("] ");
        my_put_nbr(i);
        my_putstr(" 1");
        if (c != 5)
            my_putstr(" || ");
    }
    my_putchar('\n');
    return (0);
}

int colb(int i)
{
    for (int c = 3 ; c <= 5 ; c++) {
        my_putstr("[rush1-");
        my_put_nbr(c);
        my_putstr("] 1 ");
        my_put_nbr(i);
        if (c != 5)
            my_putstr(" || ");
    }
    my_putchar('\n');
    return (0);
}

static int is_b(char *buff)
{
    int i = 0;

    if (buff[2] == '\0')
        my_putstr("1 1");
    if (buff[1] == 'B') {
        i = my_strlen(buff) - 1;
        ligneb(i);
    } else {
        for (i; buff[i] != '\0'; i++) {
        }
        i = (i / 2);
        colb(i);
    }
    return (0);
}

static int is_rush1(char *buff, int r)
{
    int i = 0;
    int conth = 0;
    int contlar = 0;
    char *tab[3] = {"[rush1-3] ", "[rush1-4] ", "[rush1-5] "};

    my_putstr(tab[r]);
    for (i; buff[i] != '\n' ; i++) {
    }
    conth++;
    contlar = i;
    i++;
    for (i; buff[i] == 'B' ; i += contlar + 1)
        conth++;
    if (conth >= 1)
        conth++;
    printstr(contlar, conth);
    return (0);
}

static int verif_4_5(char *buff)
{
    int i = 0;

    for (i; buff[i] != '\0' ; i++) {
    }
    if (buff[i - 2] == 'C')
        is_rush1(buff, 1);
    else
        is_rush1(buff, 2);
    return (0);
}

int is_rush1_345(char *buff)
{
    int i = 0;

    for (i; buff[i] != '\n' ; i++) {
    }
    if (buff[0] == 'B')
        return (is_b(buff));
    if (buff[i - 1] == 'A') {
        is_rush1(buff, 0);
    } else {
        verif_4_5(buff);
    }
    return (0);
}
