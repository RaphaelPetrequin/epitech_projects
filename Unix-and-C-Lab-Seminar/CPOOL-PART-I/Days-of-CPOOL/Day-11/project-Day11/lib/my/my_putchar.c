/*
** EPITECH PROJECT, 2023
** MY_PUTCHAR
** File description:
** Displays a char
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
