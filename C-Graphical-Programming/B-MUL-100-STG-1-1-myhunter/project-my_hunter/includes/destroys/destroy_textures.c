/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** destroy_textures
*/

#include "../run_game/game.h"

void destroy_textures(info_game *game)
{
    sfTexture_destroy(game->screen.txtr_quit_btn);
    sfTexture_destroy(game->screen.txtr_pause_btn);
    sfTexture_destroy(game->screen.txtr_screen);
    sfTexture_destroy(game->kill_board.txtr);
    sfTexture_destroy(game->kill_board.txtr_changed);
    sfRectangleShape_destroy(game->kill_board.shape);
    sfTexture_destroy(game->duck.texture);
}
