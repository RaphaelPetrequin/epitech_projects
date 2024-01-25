/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_text_pause
*/

#include "../run_game/game.h"

void make_text_pause(info_game *game, sfFont *font)
{
    sfText *text_pause = sfText_create();
    sfVector2f text_pos = {480, 260};

    sfText_setString(text_pause, "PAUSE");
    sfText_setFont(text_pause, font);
    sfText_setCharacterSize(text_pause, 40);
    sfText_setPosition(text_pause, text_pos);
    sfText_setColor(text_pause, sfBlack);
    sfText_setStyle(text_pause, sfTextItalic);
    game->text.text_pause = text_pause;
}
