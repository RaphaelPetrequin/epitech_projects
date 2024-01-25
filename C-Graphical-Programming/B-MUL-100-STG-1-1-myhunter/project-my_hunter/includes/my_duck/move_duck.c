/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** move_duck
*/

#include "../run_game/game.h"

void move_duck(info_game *game)
{
    game->duck.position.x = game->duck.position.x + game->duck.move_speed;
    if (game->duck.position.x > 1080)
        game->event.lose = sfTrue;
    sfSprite_setPosition(game->duck.sprite, game->duck.position);
}
