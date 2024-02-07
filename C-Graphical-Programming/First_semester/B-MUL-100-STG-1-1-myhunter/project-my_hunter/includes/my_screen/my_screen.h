/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** my_screen
*/

#include <SFML/Graphics.h>

#ifndef MY_SCREEN_H_
    #define MY_SCREEN_H_

    typedef struct SCREEN {
    char *screen_name;
    char *txtr_screen_name;
    sfRenderWindow *window;
    sfSprite *screen;
    sfSprite *quit_btn;
    sfSprite *pause_btn;
    sfTexture *txtr_screen;
    sfTexture *txtr_quit_btn;
    sfTexture *txtr_pause_btn;
    sfIntRect quit_btn_rect;
    sfIntRect pause_btn_rect;
    sfVector2f quit_btn_position;
    sfVector2f pause_btn_position;

} info_screen;

#endif /* !MY_SCREEN_H_ */
