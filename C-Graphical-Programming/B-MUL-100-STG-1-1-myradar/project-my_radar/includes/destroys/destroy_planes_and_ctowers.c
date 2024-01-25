/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** destroy_planes_and_ctowers
*/

#include "../my.h"

void destroy_planes(planes_l **planes)
{
    planes_l *curr = (*planes);
    planes_l *prev = NULL;

    while (curr != NULL) {
        if (prev == NULL)
            *planes = curr->next;
        else
            prev->next = curr->next;
        sfSprite_destroy(curr->s_plane);
        sfRectangleShape_destroy(curr->shape);
        free(curr);
        curr = (prev == NULL) ? *planes : prev->next;
    }
}

void destroy_ctowers(ctowers_l **ctowers)
{
    ctowers_l *curr = (*ctowers);
    ctowers_l *prev = NULL;

    while (curr != NULL) {
        if (prev == NULL)
            *ctowers = curr->next;
        else
            prev->next = curr->next;
        sfSprite_destroy(curr->s_ctower);
        sfCircleShape_destroy(curr->circle);
        free(curr);
        curr = (prev == NULL) ? *ctowers : prev->next;
    }
}
