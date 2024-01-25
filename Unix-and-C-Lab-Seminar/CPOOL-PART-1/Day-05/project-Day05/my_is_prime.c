/*
** EPITECH PROJECT, 2023
** MY_IS_PRIME
** File description:
** Returns 1 if nb is prime 0 if not
*/

int my_is_prime(int nb)
{
    if (nb <= 1) {
        return (0);
    }
    if (nb == 2 || nb == 3 || nb == 5) {
        return (1);
    } else if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) {
        return (0);
    } else {
        return (1);
    }
}
