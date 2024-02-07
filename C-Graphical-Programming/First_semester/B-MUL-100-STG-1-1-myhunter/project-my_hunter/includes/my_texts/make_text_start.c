/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_text_start
*/

#include "../run_game/game.h"

void make_text_start(info_game *game, sfFont *font)
{
    sfText *text_start = sfText_create();
    sfVector2f text_pos = {275, 520};

    sfText_setString(text_start, "_____PRESS ENTER TO START_____");
    sfText_setFont(text_start, font);
    sfText_setCharacterSize(text_start, 30);
    sfText_setPosition(text_start, text_pos);
    sfText_setColor(text_start, sfBlack);
    sfText_setStyle(text_start, sfTextItalic);
    game->text.text_start = text_start;
}
