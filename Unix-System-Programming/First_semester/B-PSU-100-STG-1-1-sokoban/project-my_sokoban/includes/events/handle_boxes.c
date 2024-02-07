/*
** EPITECH PROJECT, 2023
** B-PSU-100-STG-1-1-sokoban-raphael.petrequin
** File description:
** handle_boxes
*/

#include "../my.h"

void handle_boxes_go_up(char **map, int x, int y, int *p_pos)
{
    if (map[x - 2][y] != '#' && (map[x - 2][y] == ' '
    || map[x - 2][y] == 'O')) {
        map[x - 2][y] = 'X';
        map[x - 1][y] = 'P';
        map[x][y] = ' ';
        p_pos[0]--;
    }
}

void handle_boxes_go_down(char **map, int x, int y, int *p_pos)
{
    if (map[x + 2][y] != '#' && (map[x + 2][y] == ' '
    || map[x + 2][y] == 'O')) {
        map[x + 2][y] = 'X';
        map[x + 1][y] = 'P';
        map[x][y] = ' ';
        p_pos[0]++;
    }
}

void handle_boxes_go_left(char **map, int x, int y, int *p_pos)
{
    if (map[x][y - 2] != '#' && (map[x][y - 2] == ' '
    || map[x][y - 2] == 'O')) {
        map[x][y - 2] = 'X';
        map[x][y - 1] = 'P';
        map[x][y] = ' ';
        p_pos[1]--;
    }
}

void handle_boxes_go_right(char **map, int x, int y, int *p_pos)
{
    if (map[x][y + 2] != '#' && (map[x][y + 2] == ' '
    || map[x][y + 2] == 'O')) {
        map[x][y + 2] = 'X';
        map[x][y + 1] = 'P';
        map[x][y] = ' ';
        p_pos[1]++;
    }
}
