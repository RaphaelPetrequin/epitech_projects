/*
** EPITECH PROJECT, 2023
** PUT_ZEROS
** File description:
** prints zeros
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int put_zerosorspaces(int nb, char print_spaceorzero)
{
    int count = 0;

    if (print_spaceorzero == '0') {
        for (int i = 0; i < nb; i++) {
            my_putchar('0');
            count++;
        }
    } else {
        for (int i = 0; i < nb; i++) {
            my_putchar(' ');
            count++;
        }
    }
    return (count);
}
