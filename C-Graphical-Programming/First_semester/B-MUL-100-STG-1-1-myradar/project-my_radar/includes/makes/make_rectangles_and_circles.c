/*
** EPITECH PROJECT, 2024
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** make_rectangles_and_circles
*/

#include "../my.h"

void make_rectangle(planes_l *elt)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();
    sfVector2f rect_position = elt->pos;
    sfVector2f rect_size = {20, 20};
    sfVector2f origin = {rect_size.x / 2.0, rect_size.y / 2.0};

    sfRectangleShape_setSize(rectangle, rect_size);
    sfRectangleShape_setOrigin(rectangle, origin);
    sfRectangleShape_setOutlineThickness(rectangle, 1);
    sfRectangleShape_setFillColor(rectangle, sfTransparent);
    sfRectangleShape_setOutlineColor(rectangle, sfRed);
    elt->rect = (sfIntRect){0, 0, 20, 20};
    elt->shape = rectangle;
}

void make_circles(ctowers_l *elt)
{
    sfCircleShape *circle = sfCircleShape_create();
    float c_pos_x = elt->pos.x - (elt->radius * 1920) / 100 + 40 / 2.0;
    float c_pos_y = elt->pos.y - (elt->radius * 1920) / 100 + 40 / 2.0;
    sfVector2f circle_pos = {c_pos_x, c_pos_y};

    sfCircleShape_setRadius(circle, (elt->radius * 1920) / 100);
    sfCircleShape_setPosition(circle, circle_pos);
    sfCircleShape_setOutlineThickness(circle, 1.0);
    sfCircleShape_setOutlineColor(circle, sfBlack);
    sfCircleShape_setFillColor(circle, sfTransparent);
    elt->circle = circle;
}
