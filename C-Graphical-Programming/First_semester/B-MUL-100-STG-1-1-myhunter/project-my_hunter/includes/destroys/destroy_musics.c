/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** destroy_musics
*/

#include "../run_game/game.h"

void destroy_musics(info_game *game)
{
    sfMusic_destroy(game->music.menu_music);
    sfMusic_destroy(game->music.in_game_music);
    sfMusic_destroy(game->music.win_music);
    sfMusic_destroy(game->music.lose_music);
    sfMusic_destroy(game->music.gun_shot);
}
