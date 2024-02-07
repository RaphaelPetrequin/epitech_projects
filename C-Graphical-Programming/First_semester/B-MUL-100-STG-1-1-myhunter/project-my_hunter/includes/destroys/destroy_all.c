/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** destroy_all
*/

#include "../run_game/game.h"

void destroy_all(info_game *game)
{
    destroy_texts(game);
    destroy_sprites(game);
    destroy_textures(game);
    destroy_musics(game);
    destroy_clock_and_window(game);
}
