/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** display_game
*/

#include "../run_game/game.h"

void display_game(info_game *game)
{
    sfRenderWindow *window = game->screen.window;

    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, game->screen.screen, NULL);
    sfRenderWindow_drawSprite(window, game->screen.quit_btn, NULL);
    sfRenderWindow_drawSprite(window, game->screen.pause_btn, NULL);
    sfRenderWindow_drawRectangleShape(window, game->kill_board.shape, NULL);
    sfRenderWindow_drawSprite(window, game->kill_board.sprite, NULL);
    sfRenderWindow_drawSprite(window, game->kill_board.changed, NULL);
    sfRenderWindow_drawSprite(window, game->duck.sprite, NULL);
    sfRenderWindow_display(window);
}
