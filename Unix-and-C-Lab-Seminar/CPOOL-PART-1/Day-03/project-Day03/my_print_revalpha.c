/*
** EPITECH PROJECT, 2023
** MY_PRINT_ALPHA
** File description:
** Print alphabet in reverse
*/

int my_print_revalpha(void)
{
    for (int i = 122; i >= 97; i--) {
        my_putchar(i);
    }
    return (0);
}
