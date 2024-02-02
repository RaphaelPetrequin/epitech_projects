/*
** EPITECH PROJECT, 2023
** my_str_isupper.c
** File description:
** verifie si str majuscule
*/

#include "../../include/my.h"

int my_char_isupper(char c)
{
    if (c > 64 && c < 91) {
        return 1;
    } else {
        return 0;
    }
}
