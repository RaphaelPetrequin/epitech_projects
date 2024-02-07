/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** destroy_texts
*/

#include "../run_game/game.h"

void destroy_texts(info_game *game)
{
    sfText_destroy(game->text.text_welcome);
    sfText_destroy(game->text.text_presentation1);
    sfText_destroy(game->text.text_presentation2);
    sfText_destroy(game->text.text_presentation3);
    sfText_destroy(game->text.text_start);
    sfText_destroy(game->text.text_win);
    sfText_destroy(game->text.text_lose);
    sfText_destroy(game->text.text_pause);
    sfFont_destroy(game->text.font);
    free(game->screen.screen_name);
    free(game->screen.txtr_screen_name);
    free(game->kill_board.name);
}
