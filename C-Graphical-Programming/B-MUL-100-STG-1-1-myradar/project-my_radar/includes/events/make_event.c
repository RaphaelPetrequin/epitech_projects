/*
** EPITECH PROJECT, 2024
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** make_event
*/

#include "../my.h"

void make_event(info_event *event)
{
    sfEvent some_event;

    event->event = some_event;
    event->hide_hitboxes = sfFalse;
    event->hide_sprites = sfFalse;
}
