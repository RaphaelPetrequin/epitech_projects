/*
** EPITECH PROJECT, 2023
** MY_REVSTR
** File description:
** Reverses a string
*/

char *my_revstr(char *str)
{
    int index = 0;
    int lng = my_strlen(str) - 1;
    char tmp;

    while (index < lng) {
        tmp = str[index];
        str[index] = str[lng];
        str[lng] = tmp;
        index++;
        lng--;
    }
    return (str);
}
