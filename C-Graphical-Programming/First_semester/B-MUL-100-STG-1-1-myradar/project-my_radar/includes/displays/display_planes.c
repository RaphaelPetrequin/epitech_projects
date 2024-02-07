/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** display_planes
*/

#include "../my.h"

void render_wind_draw(info_game *game, planes_l *head)
{
    sfRenderWindow *window = game->screen.window;
    sfBool hide_s = game->event.hide_sprites;
    sfBool hide_hb = game->event.hide_hitboxes;

    if (hide_s == sfFalse && game->time.seconds >= head->delay
    && head->arrived == sfFalse && head->destroyed == sfFalse)
        sfRenderWindow_drawSprite(window, head->s_plane, NULL);
    if (hide_hb == sfFalse && game->time.seconds >= head->delay
    && head->arrived == sfFalse && head->destroyed == sfFalse)
        sfRenderWindow_drawRectangleShape(window, head->shape, NULL);
}

sfBool is_arrived(planes_l *head)
{
    if ((head->pos.x <= head->future_pos.x - 10
    || head->pos.x >= head->future_pos.x + 10
    || head->pos.y <= head->future_pos.y - 10
    || head->pos.y >= head->future_pos.y + 10)
    && head->arrived == sfFalse)
        return (sfFalse);
    return (sfTrue);
}

int check_status(planes_l *head, info_game *game)
{
    if (head->arrived == sfTrue || head->destroyed == sfTrue)
        return (1);
    return (0);
}

void display_planes(info_game *game)
{
    planes_l *head = game->planes;

    game->cpt = 1;
    if (game->nb_planes == 1)
        game->cpt = 0;
    while (head != NULL) {
        if (is_arrived(head) == sfFalse)
            render_wind_draw(game, head);
        if (is_arrived(head) == sfTrue) {
            head->arrived = sfTrue;
            game->cpt = game->cpt + check_status(head, game);
        }
        head = head->next;
    }
    if (game->cpt == game->nb_planes)
        game->end = sfTrue;
}
