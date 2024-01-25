/*
** EPITECH PROJECT, 2023
** MY_ISNEG
** File description:
** N if the int is neg, P if pos or null
*/

int my_isneg(int n)
{
    if (n >= 0 ) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
