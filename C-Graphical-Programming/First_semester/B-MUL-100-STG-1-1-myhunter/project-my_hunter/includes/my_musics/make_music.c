/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_music
*/

#include "../run_game/game.h"

void make_music(info_game *game)
{
    sfMusic *menu_music = sfMusic_createFromFile("data/menu_music.ogg");
    sfMusic *in_game_music = sfMusic_createFromFile("data/in_game_music.ogg");
    sfMusic *win_music = sfMusic_createFromFile("data/win_music.ogg");
    sfMusic *lose_music = sfMusic_createFromFile("data/lose_music.ogg");
    sfMusic *gun_shot = sfMusic_createFromFile("data/gun_shot.ogg");

    game->music.menu_music = menu_music;
    game->music.in_game_music = in_game_music;
    game->music.win_music = win_music;
    game->music.lose_music = lose_music;
    game->music.gun_shot = gun_shot;
}
