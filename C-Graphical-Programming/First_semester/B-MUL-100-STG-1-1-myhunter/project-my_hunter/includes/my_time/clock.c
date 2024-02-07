/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** clock
*/

#include "../run_game/game.h"

void clock(info_game *game)
{
    int offset = game->time.time.microseconds;
    int length = game->time.time.microseconds + 1000000.0;
    sfTimeSpan time_span = {offset, length};

    game->time.time = sfClock_getElapsedTime(game->time.clock);
    game->time.seconds = game->time.time.microseconds / 1000000.0;
    game->time.time_span = time_span;
    if (game->time.seconds > 0.4) {
        change_rect_duck(&game->duck.rect, 66, 132);
        sfClock_restart(game->time.clock);
    }
    sfSprite_setTextureRect(game->duck.sprite, game->duck.rect);
}
