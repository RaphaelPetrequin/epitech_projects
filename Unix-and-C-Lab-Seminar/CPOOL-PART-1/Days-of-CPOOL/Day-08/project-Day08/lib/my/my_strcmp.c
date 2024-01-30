/*
** EPITECH PROJECT, 2023
** MY_STRCMP
** File description:
** Reproduce the behavior of the strcmp fct
*/

int charcomp(char const s1, char const s2)
{
    return (s1 - s2);
}

int my_strcmp(char const *s1, char const *s2)
{
    int lns1 = my_strlen(s1);
    int lns2 = my_strlen(s2);

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
