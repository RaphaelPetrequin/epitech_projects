/*
** EPITECH PROJECT, 2024
** B-CPE-110-STG-1-1-secured-raphael.petrequin
** File description:
** hash
*/

#include "../../include/hashtable.h"

int check_error(char *key, int len)
{
    if (key == NULL || len <= 0)
        return 1;
    return 0;
}

int hash(char *key, int len)
{
    int ascii_value = 1;

    if (check_error(key, len))
        return 84;
    for (int i = 0; i < my_strlen(key); i++) {
        ascii_value += (key[i] * len) * (key[i] * len);
        ascii_value *= ascii_value;
    }
    if (ascii_value < 0)
        ascii_value = -ascii_value;
    return (ascii_value);
}
