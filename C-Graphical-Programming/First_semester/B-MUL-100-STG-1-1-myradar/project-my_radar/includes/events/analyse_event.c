/*
** EPITECH PROJECT, 2024
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** analyse_event
*/

#include "../my.h"

void check_key(info_event *event)
{
    sfKeyCode key = event->event.key.code;

    if (key == sfKeyL && event->hide_hitboxes == sfFalse) {
        event->hide_hitboxes = sfTrue;
        return;
    }
    if (key == sfKeyL && event->hide_hitboxes == sfTrue) {
        event->hide_hitboxes = sfFalse;
        return;
    }
    if (key == sfKeyS && event->hide_sprites == sfFalse) {
        event->hide_sprites = sfTrue;
        return;
    }
    if (key == sfKeyS && event->hide_sprites == sfTrue) {
        event->hide_sprites = sfFalse;
        return;
    }
}

void analyse_event(info_event *event, info_screen *screen)
{
    switch (event->event.type) {
        case sfEvtKeyReleased:
            check_key(event);
            break;
        case sfEvtClosed:
            sfRenderWindow_close(screen->window);
    }
}
