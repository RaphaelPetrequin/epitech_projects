/*
** EPITECH PROJECT, 2023
** MY_STRUPCASE
** File description:
** Puts every letter of every word in uppercase
*/

int mylng(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i - 1);
}

char *uppercase(char *str, char *alphabet, char *alphabetUpCase, int i)
{
    int lenAlpha = mylng(alphabet);

    for (int j = 0; j < lenAlpha; j++) {
        if (str[i] == alphabet[j]) {
            str[i] = alphabetUpCase[j];
        }
    }
    return (str);
}

char *my_strupcase(char *str)
{
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    char *alphabetUpCase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int lenStr = mylng(str);

    for (int i = 0; i < lenStr; i++) {
        uppercase(str, alphabet, alphabetUpCase, i);
    }
    return (str);
}
