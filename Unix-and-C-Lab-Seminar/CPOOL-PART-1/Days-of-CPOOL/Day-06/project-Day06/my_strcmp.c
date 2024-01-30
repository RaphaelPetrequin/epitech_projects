/*
** EPITECH PROJECT, 2023
** MY_STRCMP
** File description:
** Reproduce the behavior of the strcmp fct
*/

int str_l(char const *str)
{
    int j = 0;

    while (str[j] != '\0') {
        j++;
    }
    return (j - 1);
}

int charcomp(char const s1, char const s2)
{
    return (s1 - s2);
}

int my_strcmp(char const *s1, char const *s2)
{
    int lns1 = str_l(s1);
    int lns2 = str_l(s2);

    if (lns1 > lns2) {
        return (1);
    } else if (lns1 < lns2) {
        return (-1);
    }
    for (int i = 0; i < lns1; i++) {
        if (charcomp(s1[i], s2[i]) != 0) {
            return (charcomp(s1[i], s2[i]));
        }
    }
    return (0);
}
