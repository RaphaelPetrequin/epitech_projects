/*
** EPITECH PROJECT, 2023
** MY_ISALPHA
** File description:
** Returns 1 if is alpha and 0 if not
*/

int my_isalpha(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
        return (1);
    } else {
        return (0);
    }
}
