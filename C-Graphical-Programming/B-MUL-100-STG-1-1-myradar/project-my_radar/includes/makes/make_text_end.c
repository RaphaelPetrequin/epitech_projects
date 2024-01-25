/*
** EPITECH PROJECT, 2024
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** make_text_end
*/

#include "../my.h"

void make_text_end(info_game *game)
{
    sfText *text_win = sfText_create();
    sfVector2f text_pos = {850, 450};
    sfFont *font = sfFont_createFromFile("data/gulka.ttf");

    sfText_setString(text_win, "End of the simulation\n    Press Q to quit");
    sfText_setFont(text_win, font);
    sfText_setCharacterSize(text_win, 25);
    sfText_setPosition(text_win, text_pos);
    sfText_setColor(text_win, sfBlue);
    sfText_setStyle(text_win, sfTextBold);
    game->text = text_win;
    game->font = font;
}
