/*
** EPITECH PROJECT, 2023
** MY_PUTCHAR
** File description:
** displays a char
*/

#include <unistd.h>
#include "../../include/hashtable.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
