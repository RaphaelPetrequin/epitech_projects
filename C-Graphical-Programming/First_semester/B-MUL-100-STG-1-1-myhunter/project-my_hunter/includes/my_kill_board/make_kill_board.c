/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_kill_board
*/

#include "../run_game/game.h"

void make_kill_board(info_game *game)
{
    char *name = malloc(sizeof(char) * 27 + 1);
    sfSprite *sprite = sfSprite_create();
    sfSprite *sprite_changed = sfSprite_create();
    sfTexture *txtr = sfTexture_createFromFile("data/kill_board.png", NULL);
    sfTexture *txtr_changed;
    sfIntRect rect;

    name = my_strcpy(name, "data/changed_kill_board.png");
    txtr_changed = sfTexture_createFromFile(name, NULL);
    sfSprite_setTexture(sprite, txtr, sfTrue);
    sfSprite_setTexture(sprite_changed, txtr_changed, sfTrue);
    make_rect_kill_board_changed(&rect, game);
    game->kill_board.name = name;
    game->kill_board.sprite = sprite;
    game->kill_board.txtr = txtr;
    game->kill_board.changed = sprite_changed;
    game->kill_board.txtr_changed = txtr_changed;
    game->kill_board.rect = rect;
    sfSprite_setTextureRect(game->kill_board.changed, game->kill_board.rect);
}
