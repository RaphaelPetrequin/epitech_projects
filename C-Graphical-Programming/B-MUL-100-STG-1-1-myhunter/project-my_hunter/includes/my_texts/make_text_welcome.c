/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_text_welcome
*/

#include "../run_game/game.h"

void make_text_welcome(info_game *game, sfFont *font)
{
    sfText *text_welcome = sfText_create();
    sfVector2f text_pos = {70, 70};

    sfText_setString(text_welcome, "Welcome to my_hunter !");
    sfText_setFont(text_welcome, font);
    sfText_setCharacterSize(text_welcome, 50);
    sfText_setPosition(text_welcome, text_pos);
    sfText_setColor(text_welcome, sfBlack);
    sfText_setStyle(text_welcome, sfTextItalic);
    game->text.text_welcome = text_welcome;
}
