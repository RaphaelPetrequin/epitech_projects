/*
** EPITECH PROJECT, 2023
** MY_STRCAT
** File description:
** Concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    my_strcpy((dest + my_strlen(dest)), src);
    return (dest);
}
