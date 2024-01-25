/*
** EPITECH PROJECT, 2023
** MY_REVSTR
** File description:
** Reverses a string
*/

int strlng(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        j++;
    }
    return (j);
}

char *my_revstr(char *str)
{
    int index = 0;
    int lng = strlng(str) - 1;
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
