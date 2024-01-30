/*
** EPITECH PROJECT, 2023
** MY_COMPUTE_POWER_REC
** File description:
** Rev function that returns nb^p
*/

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (p == 0) {
        return (1);
    } else if (p < 0) {
        return (0);
    } else {
        result = result * my_compute_power_rec(nb, p - 1);
        return (result);
    }
}
