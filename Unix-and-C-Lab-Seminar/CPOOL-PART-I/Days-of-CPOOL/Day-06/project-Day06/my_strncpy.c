/*
** EPITECH PROJECT, 2023
** MY_STRNCPY
** File description:
** Copies n char of a str into another
*/

int lenght(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        j++;
    }
    return (j);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int lng = lenght(dest);

    for (i; i < n; i++) {
        dest[i] = src[i];
    }
    if (n > lng) {
        dest[i] = '\0';
    }
    return (dest);
}
