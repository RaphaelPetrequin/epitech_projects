/*
** EPITECH PROJECT, 2023
** MY_COMPUTER_POWER_IT
** File description:
** It. function that returns nb^p
*/

int power(int nb, int p, int result)
{
    for (int i = 0; i < p; i++) {
        result = result * nb;
    }
    return (result);
}

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p == 0) {
        return (1);
    } else if (p < 0) {
        return (0);
    } else {
        return (power(nb, p, result));
    }
}
