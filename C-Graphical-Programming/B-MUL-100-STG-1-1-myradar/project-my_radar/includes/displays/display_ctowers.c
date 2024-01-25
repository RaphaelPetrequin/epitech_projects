/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** display_ctowers
*/

#include "../my.h"

void display_ctowers(ctowers_l *ctowers, sfRenderWindow *window,
    info_event *event)
{
    ctowers_l *head = ctowers;

    while (head != NULL) {
        if (event->hide_sprites == sfFalse)
            sfRenderWindow_drawSprite(window, head->s_ctower, NULL);
        if (event->hide_hitboxes == sfFalse)
            sfRenderWindow_drawCircleShape(window, head->circle, NULL);
        head = head->next;
    }
}
