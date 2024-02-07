/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** is_clic_in_quit_btn
*/

#include "../run_game/game.h"

void is_clic_in_quit_btn(info_game *game)
{
    sfVector2u window_size = sfRenderWindow_getSize(game->screen.window);
    sfVector2i mouse = sfMouse_getPosition((sfWindow *)game->screen.window);
    sfBool in_game = game->event.in_game;
    sfBool win = game->event.win;
    sfBool lose = game->event.lose;
    int window_x = window_size.x;
    int window_y = window_size.y;
    sfVector2f btn_pos = game->screen.quit_btn_position;
    sfIntRect btn_rec = game->screen.quit_btn_rect;

    if (mouse.x >= (btn_pos.x / 1071) * window_size.x &&
        mouse.x <= ((btn_rec.height + btn_pos.x) / 1071) * window_size.x &&
        mouse.y >= (btn_pos.y / 600) * window_size.y &&
        mouse.y <= ((btn_rec.width + btn_pos.y) / 600) * window_size.y)
            sfRenderWindow_close(game->screen.window);
}
