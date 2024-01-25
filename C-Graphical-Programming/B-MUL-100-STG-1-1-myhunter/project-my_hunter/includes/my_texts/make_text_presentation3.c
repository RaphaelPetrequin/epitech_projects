/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_text_presentation3
*/

#include "../run_game/game.h"

void make_text_presentation3(info_game *game, sfFont *font)
{
    sfText *text_presentation3 = sfText_create();
    sfVector2f text_pos = {620, 334};

    sfText_setString(text_presentation3, "  l__ Do not let them fly away !");
    sfText_setFont(text_presentation3, font);
    sfText_setCharacterSize(text_presentation3, 22);
    sfText_setPosition(text_presentation3, text_pos);
    sfText_setColor(text_presentation3, sfBlack);
    game->text.text_presentation3 = text_presentation3;
}
