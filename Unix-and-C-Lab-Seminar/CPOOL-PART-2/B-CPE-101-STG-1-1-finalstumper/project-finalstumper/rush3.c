/*
** EPITECH PROJECT, 2023
** RUSH3
** File description:
** displays assignement's name and dimensions
*/

#include <unistd.h>
#include "includes/my.h"

static int disp_rush1_345(void)
{
    my_putstr("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1");
    my_putchar('\n');
    return (0);
}

int rush3(char *buff)
{
    if (buff[0] == 'o')
        return (is_rush1_1(buff));
    if (buff[0] == '/')
        return (is_rush1_2(buff));
    if (buff[0] == '*')
        return (is_rush1_2(buff));
    if (buff[0] == 'A')
        return (is_rush1_345(buff));
    if (buff[0] == 'B' && buff[2] == '\0')
        return (disp_rush1_345());
    if (buff[0] == 'B')
        return (is_rush1_345(buff));
    return (84);
}

int main(void)
{
    int buff_size = 30000;
    char buff[buff_size];
    int offset = 0;
    int len = read(0, buff, buff_size - offset - 1);

    while (len > 0) {
        offset += len;
        len = read(0, buff, buff_size - offset - 1);
    }
    buff[offset] = '\0';
    rush3(buff);
    return (0);
}
