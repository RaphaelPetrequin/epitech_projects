/*
** EPITECH PROJECT, 2023
** MY_COMPUTE_SQUARE_ROOT
** File description:
** Returns the square root of nb
*/

static int square_root(int nb)
{
    for (int i = (nb / 2); i >= 0; i--) {
        if (i * i == nb) {
            return (i);
        }
    }
    return (0);
}

int my_compute_square_root(int nb)
{
    if (nb == 1) {
        return (1);
    }
    if (nb <= 3) {
        return (0);
    } else {
        return (square_root(nb));
    }
}
