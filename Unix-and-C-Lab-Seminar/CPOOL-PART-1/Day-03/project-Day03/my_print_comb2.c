/*
** EPITECH PROJECT, 2023
** MY_PRINT_COMB2
** File description:
** Print a comb2
*/

int maystop(int left, int right)
{
    if (left != 98 || right != 99) {
        my_putchar(',');
        my_putchar(' ');
        return (left, right);
    }
}

int my_print_comb2(void)
{
    int left;
    int right;

    for (left = 0; left <= 99; left++) {
        for (right = left + 1; right <= 99; right++) {
            my_putchar((left / 10) + 48);
            my_putchar((left % 10) + 48);
            my_putchar(' ');
            my_putchar((right / 10) + 48);
            my_putchar((right % 10) + 48);
            maystop(left, right);
        }
    }
}
