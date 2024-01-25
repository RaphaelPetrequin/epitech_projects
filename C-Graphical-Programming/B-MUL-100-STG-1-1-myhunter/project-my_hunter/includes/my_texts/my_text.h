/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** my_text
*/

#include <SFML/Graphics.h>

#ifndef MY_TEXT_H_
    #define MY_TEXT_H_

    typedef struct TEXT {
    sfFont *font;
    sfText *text_welcome;
    sfText *text_presentation1;
    sfText *text_presentation2;
    sfText *text_presentation3;
    sfText *text_start;
    sfText *text_win;
    sfText *text_lose;
    sfText *text_pause;

} info_text;

#endif /* !MY_TEXT_H_ */
