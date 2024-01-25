/*
** EPITECH PROJECT, 2023
** MY_STRLOWCASE
** File description:
** Puts every letter of every word in lowercase
*/

#include "../../include/my.h"

char *lowercase(char *str, char *alphabet, char *alphabetUpCase, int i)
{
    int lenAlpha = my_strlen(alphabet);

    for (int j = 0; j < lenAlpha; j++) {
        if (str[i] == alphabetUpCase[j]) {
            str[i] = alphabet[j];
        }
    }
    return (str);
}

char *my_strlowcase(char *str)
{
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    char *alphabetUpCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int lenStr = my_strlen(str);

    for (int i = 0; i < lenStr; i++) {
        lowercase(str, alphabet, alphabetUpCase, i);
    }
    return (str);
}
