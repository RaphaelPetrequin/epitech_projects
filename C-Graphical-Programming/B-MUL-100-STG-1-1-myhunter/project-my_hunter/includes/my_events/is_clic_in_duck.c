/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** is_clic_in_duck
*/

#include "../run_game/game.h"

void increase_speed_duck(info_game *game)
{
    if (game->duck.live == 7)
        game->duck.move_speed = rand() % 6 + 4;
    if (game->duck.live == 5)
        game->duck.move_speed = rand() % 4 + 6;
    if (game->duck.live == 4)
        game->duck.move_speed = rand() % 4 + 6;
    if (game->duck.live == 3)
        game->duck.move_speed = rand() % 4 + 6;
    if (game->duck.live == 2)
        game->duck.move_speed = rand() % 2 + 8;
    if (game->duck.live == 1)
        game->duck.move_speed = rand() % 2 + 8;
}

void duck_get_killed(info_game *game)
{
    change_rect_kill_board_changed(&game->kill_board.rect, 66, 594);
    sfSprite_setTextureRect(game->kill_board.changed, game->kill_board.rect);
    game->duck.live = game->duck.live - 1;
    game->duck.position.x = -100;
    game->duck.position.y = rand() % 400 + 66;
    sfSprite_setPosition(game->duck.sprite, game->duck.position);
    if (game->duck.live > 0)
        increase_speed_duck(game);
    else {
        game->event.win = sfTrue;
        display_win(game);
    }
}

void is_clic_in_duck(info_game *game)
{
    sfBool in_menu = game->event.in_game;
    sfVector2u window_size = sfRenderWindow_getSize(game->screen.window);
    int window_x = window_size.x;
    int window_y = window_size.y;
    sfVector2f d_pos = game->duck.position;
    sfIntRect d_rect = game->duck.rect;
    sfVector2i mouse = sfMouse_getPosition((sfWindow *)game->screen.window);

    if (game->event.pause == sfFalse &&
    mouse.x >= (d_pos.x / 1071) * window_size.x &&
    mouse.x <= ((d_rect.height + d_pos.x) / 1071) * window_size.x &&
    mouse.y >= (d_pos.y / 600) * window_size.y &&
    mouse.y <= ((d_rect.width + d_pos.y) / 600) * window_size.y) {
        sfMusic_stop(game->music.gun_shot);
        sfMusic_setLoopPoints(game->music.gun_shot, game->time.time_span);
        if (sfMusic_getStatus(game->music.gun_shot) != sfPlaying)
            sfMusic_play(game->music.gun_shot);
        duck_get_killed(game);
    }
}
