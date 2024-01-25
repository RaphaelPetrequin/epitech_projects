/*
** EPITECH PROJECT, 2024
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** is_destroyed
*/

#include "../my.h"

void check_collision(planes_l *current, planes_l *next)
{
    if ((current->pos.x + 20 > next->pos.x
    && current->pos.y + 20 > next->pos.y
    && current->pos.x < next->pos.x + 20
    && current->pos.y < next->pos.y + 20)
    && (current->arrived == sfFalse && next->arrived == sfFalse)
    && (current->secured == sfFalse && next->secured == sfFalse)
    && current->id != next->id) {
        current->destroyed = sfTrue;
        next->destroyed = sfTrue;
    }
}

void is_destroyed(info_game *game)
{
    planes_l *current = game->planes;
    planes_l *next;

    while (current != NULL) {
        planes_in_radar(current, game->ctowers, game);
        next = current->next;
        while (next != NULL) {
            check_collision(current, next);
            next = next->next;
        }
        current = current->next;
    }
}
