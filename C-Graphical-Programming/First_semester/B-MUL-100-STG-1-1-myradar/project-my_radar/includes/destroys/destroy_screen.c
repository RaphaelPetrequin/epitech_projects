/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** destroy_screen
*/

#include "../my.h"

void destroy_screen(info_screen *screen)
{
    sfRenderWindow_destroy(screen->window);
    sfSprite_destroy(screen->screen);
    sfTexture_destroy(screen->t_screen);
    free(screen->screen_name);
    free(screen->t_screen_name);
}
