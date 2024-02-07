/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_rect_kill_board_changed
*/

#include "../run_game/game.h"

void make_rect_kill_board_changed(sfIntRect *rect, info_game *game)
{
    sfRectangleShape* rectangle = sfRectangleShape_create();
    sfVector2f rectPosition = {0, 0};
    sfVector2f rectSize = {600, 66};

    sfRectangleShape_setPosition(rectangle, rectPosition);
    sfRectangleShape_setSize(rectangle, rectSize);
    sfRectangleShape_setOutlineThickness(rectangle, 5);
    sfRectangleShape_setFillColor(rectangle, sfTransparent);
    sfRectangleShape_setOutlineColor(rectangle, sfBlack);
    rect->top = 0;
    rect->left = 0;
    rect->width = 0;
    rect->height = 66;
    game->kill_board.shape = rectangle;
}
