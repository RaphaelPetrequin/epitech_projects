/*
** EPITECH PROJECT, 2023
** MY_FIND_PRIME_SUP
** File description:
** Returns the smallest prime number >= nb
*/

int is_prime(int nb)
{
    if (nb <= 1) {
        return (0);
    }
    if (nb <= 3 || nb == 5) {
        return (1);
    } else if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) {
        return (0);
    } else {
        return (1);
    }
}

int my_find_prime_sup(int nb)
{
    int primeNb = nb;

    while (is_prime(primeNb) == 0) {
        primeNb = (primeNb + 1);
    }
    return (primeNb);
}
