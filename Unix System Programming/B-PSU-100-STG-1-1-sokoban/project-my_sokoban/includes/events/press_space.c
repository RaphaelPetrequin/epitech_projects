/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** press_space
*/

#include "../my.h"

void press_space(info_game *game)
{
    if (game->key == 32) {
        free(game->map);
        free(game->p_pos);
        game->map = load_2d_arr_from_file(game->filepath);
        game->p_pos = search_p_pos(game->map);
    }
}
