/*
** EPITECH PROJECT, 2023
** MY_COMPUTE_FACTORIAL_IT
** File description:
** It. function that returns a factorial
*/

int factorial(int nb, int result)
{
    for (int i = 1; i <= nb; i++) {
        result = result * i;
    }
    return (result);
}

int my_compute_factorial_it(int nb)
{
    if (nb < 0 || nb > 12) {
        return (0);
    } else if (nb == 0) {
        return (1);
    } else {
        return (factorial(nb, 1));
    }
}
