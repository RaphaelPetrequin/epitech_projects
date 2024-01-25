/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** my_hunter
*/

#include "game.h"

void is_win_or_lose(info_game *game)
{
    if (game->event.in_game == sfTrue && game->event.win == sfTrue) {
        sfMusic_stop(game->music.in_game_music);
        if (sfMusic_getStatus(game->music.win_music) != sfPlaying)
            sfMusic_play(game->music.win_music);
        display_win(game);
    }
    if (game->event.in_game == sfTrue && game->event.lose == sfTrue) {
        sfMusic_stop(game->music.in_game_music);
        if (sfMusic_getStatus(game->music.lose_music) != sfPlaying)
            sfMusic_play(game->music.lose_music);
        display_lose(game);
    }
}

void is_in_game_or_menu(info_game *game)
{
    if (game->event.in_game == sfFalse) {
        if (sfMusic_getStatus(game->music.menu_music) != sfPlaying) {
            sfMusic_setLoop(game->music.menu_music, sfTrue);
            sfMusic_play(game->music.menu_music);
        }
        display_menu(game);
    }
    if (game->event.in_game == sfTrue && game->event.pause == sfFalse &&
        game->event.win == sfFalse && game->event.lose == sfFalse) {
        if (sfMusic_getStatus(game->music.in_game_music) != sfPlaying) {
            sfMusic_setLoop(game->music.in_game_music, sfTrue);
            sfMusic_play(game->music.in_game_music);
        }
        clock(game);
        move_duck(game);
        display_game(game);
    }
}

void is_pause(info_game *game)
{
    if (game->event.in_game == sfTrue && game->event.pause == sfTrue)
        display_pause(game);
}

void run_game(info_game *game)
{
    sfRenderWindow *window = game->screen.window;
    sfEvent *event = &game->event.event;

    game->time.clock = sfClock_create();
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, event))
            analyse_events(game);
        is_in_game_or_menu(game);
        is_win_or_lose(game);
        is_pause(game);
    }
    destroy_all(game);
}

int main(int ac, char **av)
{
    info_game game;

    if (ac == 2 && (av[1][1] == 'h'))
        display_help();
    else if (ac == 1) {
        make_screen(&game);
        make_quit_btn(&game);
        make_pause_btn(&game);
        make_text(&game);
        make_kill_board(&game);
        make_duck(&game);
        make_event(&game);
        make_music(&game);
        run_game(&game);
    } else {
        write(1, "Wrong command, please make './my_hunter -h'\n", 45);
        return (84);
    }
    return EXIT_SUCCESS;
}
