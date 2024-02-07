/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** analyse_events
*/

#include "../run_game/game.h"

void restart_game(info_game *game)
{
    game->duck.live = 9;
    game->duck.move_speed = 4;
    game->duck.position.x = -100;
    game->kill_board.rect.width = 0;
    game->event.win = sfFalse;
    game->event.lose = sfFalse;
    sfSprite_setTextureRect(game->kill_board.changed, game->kill_board.rect);
}

void analyse_key_pressed(info_game *game)
{
    sfKeyCode key = game->event.event.key.code;

    if (key == sfKeyEnter && game->event.in_game == sfFalse) {
        game->event.in_game = sfTrue;
        sfMusic_stop(game->music.menu_music);
    }
    if (key == sfKeyR &&
    (game->event.win == sfTrue || game->event.lose == sfTrue)) {
        sfMusic_stop(game->music.in_game_music);
        restart_game(game);
    }
}

void analyse_click(info_game *game)
{
    if (game->event.event.mouseButton.button == sfMouseLeft) {
        is_clic_in_duck(game);
        is_clic_in_quit_btn(game);
        is_clic_in_pause_btn(game);
    }
}

void analyse_events(info_game *game)
{
    switch (game->event.event.type) {
        case sfEvtMouseButtonReleased:
            analyse_click(game);
            break;
        case sfEvtKeyReleased:
            analyse_key_pressed(game);
            break;
        case sfEvtClosed:
            sfRenderWindow_close(game->screen.window);
            break;
    }
}
