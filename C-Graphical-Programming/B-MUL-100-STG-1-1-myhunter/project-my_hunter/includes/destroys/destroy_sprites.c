/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** destroy_sprites
*/

#include "../run_game/game.h"

void destroy_sprites(info_game *game)
{
    sfSprite_destroy(game->screen.quit_btn);
    sfSprite_destroy(game->screen.pause_btn);
    sfSprite_destroy(game->kill_board.sprite);
    sfSprite_destroy(game->kill_board.changed);
    sfSprite_destroy(game->screen.screen);
    sfSprite_destroy(game->duck.sprite);
}
