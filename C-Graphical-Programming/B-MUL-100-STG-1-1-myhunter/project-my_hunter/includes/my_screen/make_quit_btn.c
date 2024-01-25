/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_quit_btn
*/

#include "../run_game/game.h"

void make_quit_btn(info_game *game)
{
    sfTexture *txtr_btn = sfTexture_createFromFile("data/quit_btn.png", NULL);
    sfSprite *sprite_btn = sfSprite_create();
    sfVector2f vector_quit_pos = {1020, 0};
    sfIntRect btn_rect;

    sfSprite_setTexture(sprite_btn, txtr_btn, sfTrue);
    sfSprite_setPosition(sprite_btn, vector_quit_pos);
    make_rect_btn(&btn_rect);
    game->screen.quit_btn = sprite_btn;
    game->screen.txtr_pause_btn = txtr_btn;
    game->screen.quit_btn_position = vector_quit_pos;
    game->screen.quit_btn_rect = btn_rect;
}
