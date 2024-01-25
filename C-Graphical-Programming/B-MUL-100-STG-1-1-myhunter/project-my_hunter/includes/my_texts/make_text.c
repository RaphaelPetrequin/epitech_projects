/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_text
*/

#include "../run_game/game.h"

void make_text(info_game *game)
{
    sfFont *font = sfFont_createFromFile("data/gulka.ttf");

    make_text_welcome(game, font);
    make_text_presentation1(game, font);
    make_text_presentation2(game, font);
    make_text_presentation3(game, font);
    make_text_start(game, font);
    make_text_win(game, font);
    make_text_lose(game, font);
    make_text_pause(game, font);
    game->text.font = font;
}
