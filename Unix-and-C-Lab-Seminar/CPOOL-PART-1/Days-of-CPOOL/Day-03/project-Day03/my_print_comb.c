/*
** EPITECH PROJECT, 2023
** MY_PRINT_COMB
** File description:
** Print a comb
*/

int ifstop(int left)
{
    if (left != 55 ) {
        my_putchar(',');
        my_putchar(' ');
        return (left);
    }
}

int for3(int left, int mid, int right)
{
    for (right = mid + 1; right <= 57; right++ ) {
        my_putchar(left);
        my_putchar(mid);
        my_putchar(right);
        ifstop(left);
    }
    return (0);
}

int my_print_comb(void)
{
    int left;
    int mid;
    int right;

    for (left = 48; left <= 55; left++) {
        for (mid = left + 1; mid <= 56; mid++) {
            for3(left, mid, right);
        }
    }
    return (0);
}
