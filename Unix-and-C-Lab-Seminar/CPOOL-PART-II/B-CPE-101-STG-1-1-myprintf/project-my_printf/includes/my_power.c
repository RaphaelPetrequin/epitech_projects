/*
** EPITECH PROJECT, 2023
** MY_POWER
** File description:
** make the pw of nb
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include "my.h"

int my_power(int nb, int p)
{
    int result = nb;

    if (p == 0) {
        return (1);
    } else if (p < 0) {
        return (0);
    } else {
        result = result * my_power(nb, p - 1);
        return (result);
    }
}
