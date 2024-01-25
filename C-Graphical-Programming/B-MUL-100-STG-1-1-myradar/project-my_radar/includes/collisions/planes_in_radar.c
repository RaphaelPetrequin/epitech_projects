/*
** EPITECH PROJECT, 2024
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** planes_in_radar
*/

#include "../my.h"

void is_touching_ct(planes_l *planes, ctowers_l *ctowers)
{
    sfVector2f rect_size = sfRectangleShape_getSize(planes->shape);
    float Cr = sqrt(pow(rect_size.x, 2) + pow(rect_size.y, 2)) / 2.0;
    float Dr = sfCircleShape_getRadius(ctowers->circle);
    sfVector2f center1 = sfRectangleShape_getPosition(planes->shape);
    sfVector2f center2 = sfCircleShape_getPosition(ctowers->circle);
    sfVector2f C = {center1.x + Cr, center1.y + Cr};
    sfVector2f D = {center2.x + Dr, center2.y + Dr};
    float in_it = pow((Cr + Dr), 2);

    if ((pow((C.x - D.x - 20), 2) + pow((C.y - D.y - 20), 2)) <= in_it) {
        sfRectangleShape_setOutlineColor(planes->shape, sfGreen);
        planes->secured = sfTrue;
    }
}

void planes_in_radar(planes_l *planes, ctowers_l *ctowers, info_game *game)
{
    while (planes != NULL) {
        planes->secured = sfFalse;
        sfRectangleShape_setOutlineColor(planes->shape, sfRed);
        if (planes->arrived == sfTrue || planes->destroyed == sfTrue) {
            planes->secured = sfTrue;
            planes = planes->next;
            continue;
        }
        ctowers = game->ctowers;
        while (ctowers != NULL) {
            is_touching_ct(planes, ctowers);
            ctowers = ctowers->next;
        }
        planes = planes->next;
    }
}
