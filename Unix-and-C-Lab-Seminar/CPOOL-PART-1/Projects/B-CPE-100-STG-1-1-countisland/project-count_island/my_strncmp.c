/*
** EPITECH PROJECT, 2023
** MY_STRNCMP
** File description:
** Reproduce the behavior of the strncmp fct
*/

int str_ln(char const *str)
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

int my_strncmp(char const *s1, char const *s2, int n)
{
    int lns1 = str_l(s1);
    int lns2 = str_l(s2);

    if (lns1 > lns2 && lns1 <= n ) {
        return (1);
    } else if (lns1 < lns2 && lns2 <= n ) {
        return (-1);
    }
    for (int i = 0; i < n; i++) {
        if (charcomp(s1[i], s2[i]) != 0) {
            return (charcomp(s1[i], s2[i]));
        }
    }
    return (0);
}
