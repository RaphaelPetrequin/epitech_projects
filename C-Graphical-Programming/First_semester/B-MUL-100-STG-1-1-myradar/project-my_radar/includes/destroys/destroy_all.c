/*
** EPITECH PROJECT, 2024
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** destroy_all
*/

#include "../my.h"

void destroy_all(planes_l **planes, ctowers_l **ctowers, info_screen *screen,
    info_time *time)
{
    destroy_planes(planes);
    destroy_ctowers(ctowers);
    destroy_screen(screen);
    sfClock_destroy(time->clock);
}
