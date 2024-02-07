/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_event
*/

#include "../run_game/game.h"

void make_event(info_game *game)
{
    sfEvent event_event;

    game->event.event = event_event;
    game->event.in_game = sfFalse;
    game->event.pause = sfFalse;
    game->event.win = sfFalse;
    game->event.lose = sfFalse;
}
