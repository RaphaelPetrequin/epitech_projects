/*
** EPITECH PROJECT, 2023
** DO-OP
** File description:
** Does operations
*/

#include <unistd.h>
#include "../lib/my/my.h"

static char my_getop(char *str)
{
    int chr = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        chr = str[i];
    }
    if (chr == '+' || chr == '*' || chr == '/' || chr == '%' || chr == '-') {
        return (chr);
    }
}

static int my_op(int value1, int value2, char operator)
{
    if (operator == '+')
        return (value1 + value2);
    if (operator == '*')
        return (value1 * value2);
    if (operator == '/')
        return (value1 / value2);
    if (operator == '%')
        return (value1 % value2);
    if (operator == '-') {
        return (value1 - value2);
    return (84);
}

int test(char operator, int value2)
{
    if (operator == '/' && value2 == 0) {
        my_putstr("Stop: division by zero\n");
        return (84);
    } else if (operator == '%' && value2 == 0) {
        my_putstr("Stop: modulo by zero\n");
        return (84);
    }
    return (0);
}

static int do_op1(char **av, int value1)
{
    if (my_isalpha(av[1][0]) == 1) {
        value1 = 0;
    } else {
        value1 = my_getnbr(av[1]);
    }
    return (value1);
}

static int do_op2(char **av, int value2)
{
    if (my_isalpha(av[3][0]) == 1) {
        value2 = 0;
    } else {
        value2 = my_getnbr(av[3]);
    }
    return (value2);
}

int main(int ac, char **av)
{
    int value1 = do_op1(av, value1);
    int value2 = do_op2(av, value2);
    char operator = my_getop(av[2]);

    if (ac == 4) {
        if (value2 == 0) {
            return (test(operator, value2));
        }
        my_put_nbr(my_op(value1, value2, operator));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
