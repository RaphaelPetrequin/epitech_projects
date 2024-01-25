/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** destroy_clock_and_window
*/

#include "../run_game/game.h"

void destroy_clock_and_window(info_game *game)
{
    sfClock_destroy(game->time.clock);
    sfRenderWindow_destroy(game->screen.window);
}
