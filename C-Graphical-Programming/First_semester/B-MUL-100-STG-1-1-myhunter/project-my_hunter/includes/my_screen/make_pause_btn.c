/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_pause_btn
*/

#include "../run_game/game.h"

void make_pause_btn(info_game *game)
{
    sfTexture *txtr_btn = sfTexture_createFromFile("data/pause_btn.png", NULL);
    sfSprite *sprite_btn = sfSprite_create();
    sfVector2f vector_pause_pos = {980, 0};
    sfIntRect btn_rect;

    sfSprite_setTexture(sprite_btn, txtr_btn, sfTrue);
    sfSprite_setPosition(sprite_btn, vector_pause_pos);
    make_rect_btn(&btn_rect);
    game->screen.pause_btn = sprite_btn;
    game->screen.txtr_quit_btn = txtr_btn;
    game->screen.pause_btn_position = vector_pause_pos;
    game->screen.pause_btn_rect = btn_rect;
}
