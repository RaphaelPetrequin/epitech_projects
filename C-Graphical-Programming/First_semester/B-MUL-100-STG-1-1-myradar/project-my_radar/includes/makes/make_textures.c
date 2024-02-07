/*
** EPITECH PROJECT, 2024
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** make_textures
*/

#include "../my.h"

void make_textures(info_texture *texture)
{
    sfTexture *t_ctower = sfTexture_createFromFile("data/ctower.png", NULL);
    sfTexture *t_plane = sfTexture_createFromFile("data/plane.png", NULL);

    texture->ctower = t_ctower;
    texture->plane = t_plane;
}
