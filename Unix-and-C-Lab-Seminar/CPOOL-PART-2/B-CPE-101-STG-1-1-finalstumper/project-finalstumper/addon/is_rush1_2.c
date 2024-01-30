/*
** EPITECH PROJECT, 2023
** IS_RUSH1_2
** File description:
** finds the length and weigth of rush1_2
*/

#include "../includes/my.h"

int lenweight(char *buff, int weigth, int length)
{
    int i = 0;

    for (i; buff[i] != '\n'; i++) {
        weigth++;
    }
    length++;
    i++;
    for (i; buff[i] == '*'; i += (weigth + 1)) {
        length++;
    }
    if (length >= 1) {
        length++;
    }
    my_put_nbr(weigth);
    my_putchar(' ');
    my_put_nbr(length);
    return (0);
}

int is_one(char *buff)
{
    int i = 0;

    if (buff[2] == '\0') {
        my_putstr("1 1");
    } else if (buff[1] == '*') {
        i = my_strlen(buff) - 1;
        my_put_nbr(i);
        my_putstr(" 1");
    } else {
        for (i; buff[i] != '\0'; i++) {
        }
        i = (i / 2);
        my_putstr("1 ");
        my_put_nbr(i);
    }
    return (0);
}

int is_rush1_2(char *buff)
{
    int weigth = 0;
    int length = 0;

    my_putstr("[rush1-2] ");
    if (buff[0] == '*') {
        is_one(buff);
    } else {
        lenweight(buff, weigth, length);
    }
    my_putchar('\n');
    return (0);
}
