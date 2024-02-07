/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** my_radar
*/

#include "includes/my.h"

void display_game(info_game *game)
{
    sfRenderWindow *window = game->screen.window;

    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, game->screen.screen, NULL);
    display_planes(game);
    display_ctowers(game->ctowers, window, &game->event);
    sfRenderWindow_display(window);
}

void move_planes(info_game *game)
{
    sfVector2f pos;
    planes_l *current_plane = game->planes;

    game->time.time = sfClock_getElapsedTime(game->time.clock);
    game->time.seconds = game->time.time.microseconds / 1000000.0;
    while (current_plane != NULL) {
        if (game->time.seconds >= 1
        && game->time.seconds >= current_plane->delay
        && current_plane->destroyed != sfTrue) {
            current_plane->pos.x += current_plane->x_vel;
            current_plane->pos.y += current_plane->y_vel;
            pos = (sfVector2f){current_plane->pos.x, current_plane->pos.y};
        }
        sfSprite_setPosition(current_plane->s_plane, pos);
        game->planes->pos = pos;
        sfRectangleShape_setPosition(current_plane->shape, pos);
        current_plane = current_plane->next;
    }
}

void display_end(info_game *game)
{
    sfRenderWindow *window = game->screen.window;

    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, game->screen.screen, NULL);
    sfRenderWindow_drawText(window, game->text, NULL);
    sfRenderWindow_display(window);
}

void run_game(info_game *game)
{
    sfRenderWindow *window = game->screen.window;

    game->end = sfFalse;
    game->time.clock = sfClock_create();
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &game->event.event))
            analyse_event(&game->event, &game->screen);
        if (game->end == sfFalse) {
            move_planes(game);
            is_destroyed(game);
            display_game(game);
        }
        if (game->end == sfTrue)
            display_end(game);
    }
    destroy_all(&game->planes, &game->ctowers, &game->screen, &game->time);
}

int main(int ac, char **av)
{
    info_game game;
    struct stat st;
    int fd;

    game.ctowers = NULL;
    game.planes = NULL;
    if (ac != 2)
        return (display_no_arg());
    if (ac == 2 && (av[1][1] == 'h'))
        return (display_help());
    fd = open(av[1], O_RDONLY);
    stat(av[1], &st);
    if (error_handler(ac, av[1], fd, &st) == 84)
        return (84);
    make_planes_and_control_towers(&game, &st, fd);
    make_screen(&game.screen);
    make_event(&game.event);
    make_text_end(&game);
    run_game(&game);
    return EXIT_SUCCESS;
}
