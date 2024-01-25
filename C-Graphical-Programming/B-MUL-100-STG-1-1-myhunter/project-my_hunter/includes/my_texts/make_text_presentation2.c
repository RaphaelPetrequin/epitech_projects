/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_text_presentation2
*/

#include "../run_game/game.h"

void make_text_presentation2(info_game *game, sfFont *font)
{
    sfText *text_presentation2 = sfText_create();
    sfVector2f text_pos = {620, 312};

    sfText_setString(text_presentation2, "  l__ Be ready to shoot !\n");
    sfText_setFont(text_presentation2, font);
    sfText_setCharacterSize(text_presentation2, 22);
    sfText_setPosition(text_presentation2, text_pos);
    sfText_setColor(text_presentation2, sfBlack);
    game->text.text_presentation2 = text_presentation2;
}
