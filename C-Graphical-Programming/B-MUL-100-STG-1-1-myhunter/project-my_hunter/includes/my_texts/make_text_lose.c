/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_text_lose
*/

#include "../run_game/game.h"

void make_text_lose(info_game *game, sfFont *font)
{
    sfText *text_lose = sfText_create();
    sfVector2f text_pos = {420, 250};

    sfText_setString(text_lose, "   !! YOU LOSE !!\nPress R to restart");
    sfText_setFont(text_lose, font);
    sfText_setCharacterSize(text_lose, 25);
    sfText_setPosition(text_lose, text_pos);
    sfText_setColor(text_lose, sfRed);
    sfText_setStyle(text_lose, sfTextBold);
    game->text.text_lose = text_lose;
}
