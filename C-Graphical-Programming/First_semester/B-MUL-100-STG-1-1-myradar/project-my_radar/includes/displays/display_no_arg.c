/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** display_no_arg
*/

#include "../my.h"

int display_no_arg(void)
{
    write(1, "Retry with: \"./my_radar -h\"\n", 29);
    return (84);
}
