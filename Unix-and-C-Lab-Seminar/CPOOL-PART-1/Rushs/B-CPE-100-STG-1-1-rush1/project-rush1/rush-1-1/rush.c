/*
** EPITECH PROJECT, 2023
** RUSH
** File description:
** Display a square
*/

int is_error(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (0);
}

void top_bottom(int l, int x)
{
    if (l == 1 || l == x) {
        my_putchar('o');
    } else {
        my_putchar('-');
    }
}

void middle(int l, int x)
{
    if (l == 1 || l == x) {
        my_putchar('|');
    } else {
        my_putchar(' ');
    }
}

void tb_or_md(int h, int y, int l, int x)
{
    if (h == 1 || h == y) {
        top_bottom(l, x);
    } else if (h > 1 || h < y) {
        middle(l, x);
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0 ) {
        is_error("Invalid size\n");
        return;
    }
    for (int h = 1; h <= y ; h++) {
        for (int l = 1; l <= x; l++) {
            tb_or_md(h, y, l, x);
        }
        my_putchar('\n');
    }
    return;
}
