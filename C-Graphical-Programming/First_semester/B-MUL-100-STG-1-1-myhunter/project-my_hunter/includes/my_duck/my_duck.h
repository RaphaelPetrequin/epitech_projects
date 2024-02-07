/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** my_duck
*/

#include <SFML/Graphics.h>

#ifndef MY_DUCK_H
    #define MY_DUCK_H

    typedef struct DUCK {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f position;
    int move_speed;
    int live;

} info_duck;

#endif /* !MY_DUCK_H */
