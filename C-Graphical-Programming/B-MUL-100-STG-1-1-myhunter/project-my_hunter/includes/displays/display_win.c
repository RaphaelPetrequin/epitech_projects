/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** display_win
*/

#include "../run_game/game.h"

void display_win(info_game *game)
{
    sfRenderWindow *window = game->screen.window;

    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, game->screen.screen, NULL);
    sfRenderWindow_drawText(window, game->text.text_win, NULL);
    sfRenderWindow_drawSprite(window, game->screen.quit_btn, NULL);
    sfRenderWindow_display(window);
}
