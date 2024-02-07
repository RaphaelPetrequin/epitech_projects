/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_duck
*/

#include "../run_game/game.h"

void make_duck(info_game *game)
{
    sfTexture *txtr_duck = sfTexture_createFromFile("data/duck.png", NULL);
    sfSprite *duck_sprite = sfSprite_create();
    sfVector2f duck_position = {-100, (rand() % 400 + 1)};
    sfIntRect duck_rect;

    sfSprite_setTexture(duck_sprite, txtr_duck, sfTrue);
    make_rect_duck(&duck_rect);
    game->duck.sprite = duck_sprite;
    game->duck.texture = txtr_duck;
    game->duck.rect = duck_rect;
    game->duck.position = duck_position;
    game->duck.move_speed = 4;
    game->duck.live = 9;
}
