/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_text_win
*/

#include "../run_game/game.h"

void make_text_win(info_game *game, sfFont *font)
{
    sfText *text_win = sfText_create();
    sfVector2f text_pos = {420, 250};

    sfText_setString(text_win, "   !! YOU WIN !!\nPress R to restart");
    sfText_setFont(text_win, font);
    sfText_setCharacterSize(text_win, 25);
    sfText_setPosition(text_win, text_pos);
    sfText_setColor(text_win, sfBlue);
    sfText_setStyle(text_win, sfTextBold);
    game->text.text_win = text_win;
}
