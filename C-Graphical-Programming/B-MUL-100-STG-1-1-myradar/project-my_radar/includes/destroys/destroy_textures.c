/*
** EPITECH PROJECT, 2024
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** destroy_textures
*/

#include "../my.h"

void destroy_textures(info_texture *texture)
{
    sfTexture_destroy(texture->ctower);
    sfTexture_destroy(texture->plane);
}
