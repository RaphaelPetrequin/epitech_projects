/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** make_screen
*/

#include "../my.h"

void make_screen(info_screen *screen)
{
    char *screen_name = malloc(sizeof(char) * 9 + 1);
    char *txtr_name = malloc(sizeof(char) * 15 + 1);
    sfTexture *txtr_screen;
    sfSprite *screen_sprite = sfSprite_create();
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;

    screen_name = my_strcpy(screen_name, "my_radar");
    txtr_name = my_strcpy(txtr_name, "data/map.png");
    window = sfRenderWindow_create(
    mode, screen_name, sfResize | sfClose, NULL);
    txtr_screen = sfTexture_createFromFile(txtr_name, NULL);
    sfSprite_setTexture(screen_sprite, txtr_screen, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 30);
    screen->window = window;
    screen->screen = screen_sprite;
    screen->t_screen = txtr_screen;
    screen->screen_name = screen_name;
    screen->t_screen_name = txtr_name;
}
