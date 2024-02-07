/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** display_help
*/

#include "../run_game/game.h"

void display_help(void)
{
    write(1, "USAGE\n", 7);
    write(1, "     ./my_hunter\n", 18);
    write(1, "DESCRIPTION\n", 13);
    write(1, "     No other flags are available for the program.\n", 52);
}
