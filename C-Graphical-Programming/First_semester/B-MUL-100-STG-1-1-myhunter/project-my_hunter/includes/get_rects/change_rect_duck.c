/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** change_rect_duck
*/

#include <SFML/Graphics.h>

void change_rect_duck(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left >= max_value)
        (rect->left) = 0;
    else
        (rect->left) += offset;
}
