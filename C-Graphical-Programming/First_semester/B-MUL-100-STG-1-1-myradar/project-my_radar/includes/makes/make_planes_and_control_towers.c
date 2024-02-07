/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** make_planes_and_control_towers
*/

#include "../my.h"

void make_velocity_and_angle(planes_l *elt)
{
    float delta_x = elt->future_pos.x - elt->pos.x;
    float delta_y = elt->future_pos.y - elt->pos.y;
    float theta = atan2(delta_y, delta_x);

    elt->x_vel = elt->speed * cos(theta);
    elt->y_vel = elt->speed * sin(theta);
    elt->angle = atan2(elt->y_vel, elt->x_vel) * (180 / M_PI);
    sfSprite_setRotation(elt->s_plane, elt->angle);
    sfRectangleShape_setRotation(elt->shape, elt->angle);
}

void add_info(char **tmp, planes_l *elt, int index)
{
    elt->pos = (sfVector2f){my_getnbr(tmp[0]), my_getnbr(tmp[1])};
    elt->future_pos = (sfVector2f){my_getnbr(tmp[2]), my_getnbr(tmp[3])};
    elt->speed = my_getnbr(tmp[4]);
    elt->delay = my_getnbr(tmp[5]);
    elt->id = index;
    elt->secured = sfFalse;
    elt->arrived = sfFalse;
    elt->destroyed = sfFalse;
}

void make_planes(planes_l **planes, char **coords, int index,
    sfTexture *t_plane)
{
    planes_l *elt = malloc(sizeof(planes_l));
    char **tmp;
    sfSprite *s_plane = sfSprite_create();
    float s_origin_x;
    float s_origin_y;

    sfSprite_setTexture(s_plane, t_plane, sfTrue);
    tmp = my_str_to_word_array_for_int(coords[index]);
    add_info(tmp, elt, index);
    elt->s_plane = s_plane;
    s_origin_x = sfSprite_getLocalBounds(elt->s_plane).width / 2.0;
    s_origin_y = sfSprite_getLocalBounds(elt->s_plane).height / 2.0;
    sfSprite_setOrigin(elt->s_plane, (sfVector2f){s_origin_x, s_origin_y});
    make_rectangle(elt);
    make_velocity_and_angle(elt);
    elt->next = *planes;
    *planes = elt;
}

void make_control_tower(ctowers_l **ctowers, char **coords, int index,
    sfTexture *t_ctower)
{
    ctowers_l *elt = malloc(sizeof(ctowers_l));
    char **tmp;
    sfSprite *s_ctower = sfSprite_create();

    sfSprite_setTexture(s_ctower, t_ctower, sfTrue);
    tmp = my_str_to_word_array_for_int(coords[index]);
    elt->pos.x = my_getnbr(tmp[0]);
    elt->pos.y = my_getnbr(tmp[1]);
    elt->radius = my_getnbr(tmp[2]);
    elt->next = *ctowers;
    elt->s_ctower = s_ctower;
    sfSprite_setPosition(elt->s_ctower, (sfVector2f){elt->pos.x, elt->pos.y});
    make_circles(elt);
    *ctowers = elt;
}

void make_planes_and_control_towers(info_game *game, struct stat *st, int fd)
{
    int index;
    char **coords;
    info_texture texture;

    coords = take_coords(st, fd, coords);
    make_textures(&texture);
    for (index = 0; coords[index][0] != '\0'; index++)
        make_planes(&game->planes, coords, index, texture.plane);
    game->nb_planes = index;
    index++;
    for (index; coords[index] != 0; index++)
        make_control_tower(&game->ctowers, coords, index, texture.ctower);
}
