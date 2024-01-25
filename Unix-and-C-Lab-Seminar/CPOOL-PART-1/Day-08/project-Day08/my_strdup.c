/*
** EPITECH PROJECT, 2023
** MY_STRDUP
** File description:
** Allocates memory and copies the str in it
*/

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;
    int lnsrc = my_strlen(src);

    str = malloc(sizeof(char) * (lnsrc + 1));
    for (i; src[i] != '\0'; i++) {
        str[i] = src[i];
    }
    if (str == 0) {
        return (0);
    }
    str[i] = '\0';
    return (str);
}
