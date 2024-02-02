/*
** EPITECH PROJECT, 2023
** MY_STRNCPY
** File description:
** Copies n char of a str into another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int lng = my_strlen(src);

    for (i; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    if (n > lng) {
        dest[i] = '\0';
    }
    return (dest);
}
