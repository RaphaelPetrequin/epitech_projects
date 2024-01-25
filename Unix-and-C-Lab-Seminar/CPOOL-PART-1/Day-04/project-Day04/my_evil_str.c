/*
** EPITECH PROJECT, 2023
** MY_EVIL_STR
** File description:
** swap each of the str's char 2 by 2
*/

int strlng(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        j++;
    }
    return (j);
}

char *my_evil_str(char *str)
{
    int lng = strlng(str);
    char tmp;

    for (int i = 0; i < lng / 2; i++) {
        tmp = str[i];
        str[i] = str[lng - i - 1];
        str[lng - i - 1] = tmp;
    }
    return (str);
}
