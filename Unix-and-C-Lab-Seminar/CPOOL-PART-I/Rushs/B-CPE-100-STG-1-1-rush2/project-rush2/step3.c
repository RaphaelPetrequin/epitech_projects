/*
** EPITECH PROJECT, 2023
** rush2.c
** File description:
** compte le nombre d'occurences de lettres
*/

#include "../include/my.h"
#include <unistd.h>

int percentage(int res, float r)
{
    int print = 0;
    float verif = 100.00;

    my_put_nbr(res);
    my_putchar('.');
    if (r == 0) {
        my_putstr("00");
    } else {
        my_put_nbr(r * verif);
    }
    return 0;
}

int frequencies(int cpt, char *str)
{
    int compt = 0;
    int res = cpt * 100;
    float r = 0;

    my_putchar(' ');
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (my_isalpha(str[i]) == 1) {
            compt++;
        }
    }
    res = res / compt;
    r = ((float)(cpt * 100) / (float)compt) - (float)res;
    my_putchar('(');
    percentage(res, r);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}

int test(char c, char *str)
{
    if (my_isalpha(c) != 1) {
        write(2, "Error output\n", 13);
        return (84);
    }
    return (0);
}

int rush2(char c, char *str)
{
    int cpt = 0;

    if (test(c, str) == 84)
        return (84);
    if (my_char_isupper(c) == 1) {
        my_strupcase(str);
    } else {
        my_strlowcase(str);
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            cpt++;
        }
    }
    my_putchar(c);
    my_putchar(':');
    my_putchar(cpt + 48);
    frequencies(cpt, str);
    return (0);
}

int main(int argc, char **argv)
{
    int i = 2;

    while (argv[i] != 0) {
        if (test(argv[i][0], argv[1]) == 84)
            return (84);
        rush2(argv[i][0], argv[1]);
        i++;
    }
    return (0);
}
