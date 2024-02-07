/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** change_rect_kill_board_changed
*/

#include <SFML/Graphics.h>

void change_rect_kill_board_changed(sfIntRect *rect, int offset, int max_value)
{
    if (rect->width >= max_value)
        (rect->width) = 0;
    else
        (rect->width) += offset;
    return;
}
