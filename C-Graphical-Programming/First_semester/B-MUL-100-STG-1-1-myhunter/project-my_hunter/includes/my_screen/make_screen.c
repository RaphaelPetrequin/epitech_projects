/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_screen
*/

#include "../run_game/game.h"

void make_screen(info_game *game)
{
    char *screen_name = malloc(sizeof(char) * 9 + 1);
    char *txtr_name = malloc(sizeof(char) * 15 + 1);
    sfTexture *txtr_screen;
    sfSprite *screen_sprite = sfSprite_create();
    sfVideoMode mode = {1071, 600, 32};
    sfRenderWindow *window;

    screen_name = my_strcpy(screen_name, "my_hunter");
    txtr_name = my_strcpy(txtr_name, "data/forest.png");
    window = sfRenderWindow_create(
    mode, screen_name, sfResize | sfClose, NULL);
    txtr_screen = sfTexture_createFromFile(txtr_name, NULL);
    sfSprite_setTexture(screen_sprite, txtr_screen, sfTrue);
    sfRenderWindow_setFramerateLimit(window, 30);
    game->screen.window = window;
    game->screen.screen = screen_sprite;
    game->screen.txtr_screen = txtr_screen;
    game->screen.screen_name = screen_name;
    game->screen.txtr_screen_name = txtr_name;
}
