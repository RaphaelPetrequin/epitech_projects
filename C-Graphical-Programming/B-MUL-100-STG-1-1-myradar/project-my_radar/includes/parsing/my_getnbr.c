/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myradar-raphael.petrequin
** File description:
** my_getnbr
*/

int my_getnbr(char *str)
{
    int res = 0;
    int sign = 1;

    for (int i = 0; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            sign = sign * -1;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            res = res * 10 + str[i] - '0';
    }
    return (res * sign);
}
