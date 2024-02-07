/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** make_text_presentation1
*/

#include "../run_game/game.h"

void make_text_presentation1(info_game *game, sfFont *font)
{
    sfText *text_presentation1 = sfText_create();
    sfVector2f text_pos = {620, 290};

    sfText_setString(text_presentation1, "Nine ducks will appear in turn\n");
    sfText_setFont(text_presentation1, font);
    sfText_setCharacterSize(text_presentation1, 22);
    sfText_setPosition(text_presentation1, text_pos);
    sfText_setColor(text_presentation1, sfBlack);
    game->text.text_presentation1 = text_presentation1;
}
