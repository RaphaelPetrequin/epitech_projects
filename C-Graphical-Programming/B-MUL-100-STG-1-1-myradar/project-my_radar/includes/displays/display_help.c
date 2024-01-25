/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** display_help
*/

#include "../my.h"

int display_help(void)
{
    write(1, "Air traffic simulation panel\n\n", 30);
    write(1, "USAGE\n", 7);
    write(1, " ./my_radar ./maps/[name_of_the_file]\n\n", 40);
    write(1, "OPTIONS\n", 9);
    write(1, " -h\t --> \t print the usage and quit.\n\n", 39);
    write(1, "USER INTERACTIONS\n", 19);
    write(1, " 'L' key --> \tenable/disable hitboxes and areas.\n", 50);
    write(1, " 'S' key --> \t enable/disable sprites.\n", 40);
    return (0);
}
