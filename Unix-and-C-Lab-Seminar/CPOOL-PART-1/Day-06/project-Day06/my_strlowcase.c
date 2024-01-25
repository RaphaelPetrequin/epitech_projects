/*
** EPITECH PROJECT, 2023
** MY_STRLOWCASE
** File description:
** Puts every letter of every word in lowercase
*/

int mylenght(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i - 1);
}

char *lowercase(char *str, char *alphabet, char *alphabetUpCase, int i)
{
    int lenAlpha = mylenght(alphabet);

    for (int j = 0; j < lenAlpha; j++) {
        if (str[i] == alphabetUpCase[j]) {
            str[i] = alphabet[j];
        }
    }
    return (str);
}

char *my_strlowcase(char *str)
{
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    char *alphabetUpCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int lenStr = mylenght(str);

    for (int i = 0; i < lenStr; i++) {
        lowercase(str, alphabet, alphabetUpCase, i);
    }
    return (str);
}
