/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** display_usage
*/

#include "../my.h"

void display_usage(void)
{
    write(1, "USAGE\n", 7);
    write(1, "     ./my_sokoban map\n", 23);
    write(1, "DESCRIPTION\n", 13);
    write(1, "     map  file representing the warehouse map,", 46);
    write(1, " containing '#' for walls,\n", 28);
    write(1, "          'P' for the player, 'X' for boxes", 43);
    write(1, " and 'O' for storage locations.\n", 33);
}
