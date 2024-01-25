/*
** EPITECH PROJECT, 2023
** MY_STRSTR
** File description:
** Reproduce the behavior of the strstr function
*/

char *create_str(char *str, int i, int lngToFind)
{
    int lngStr = (my_strlen(str));
    char result[lngStr - i];

    for (int j = 0; j < lngStr - i; j++) {
        result[j] = str[i + j];
    }
    return result;
}

int str_verif(char *str, char const *to_find, int i, int lngToFind)
{
    int stop = 0;

    for (int j = 0; str[i + j] == to_find[j] && j < lngToFind; j++) {
        stop++;
    }
    if (stop == lngToFind) {
        return (1);
    } else {
        return (0);
    }
}

char *my_strstr(char *str, char const *to_find)
{
    int lngStr = (my_strlen(str));
    int lngToFind = (my_strlen(to_find));
    int verif;

    for (int i = 0; i < lngStr; i++) {
        if (str[i] == to_find[0]) {
            verif = str_verif(str, to_find, i, lngToFind);
        }
        if (verif == 1) {
            return (create_str(str, i, lngToFind));
        }
    }
    return;
}
