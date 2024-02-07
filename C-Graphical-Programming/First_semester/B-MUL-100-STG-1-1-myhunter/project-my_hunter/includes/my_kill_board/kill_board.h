/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** kill_board
*/

#include <SFML/Graphics.h>

#ifndef KILL_BOARD_H_
    #define KILL_BOARD_H_

    typedef struct KILLBOARD {
    char *name;
    sfSprite *sprite;
    sfSprite *changed;
    sfTexture *txtr;
    sfTexture *txtr_changed;
    sfIntRect rect;
    sfRectangleShape *shape;

} info_kill_board;

#endif /* !KILL_BOARD_H_ */
