/*
** EPITECH PROJECT, 2023
** RUSH
** File description:
** Display a square with letters
*/

static int is_error(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (0);
}

static void is_one(int h, int y, int l, int x)
{
    if (x == 1 && y == 1) {
        my_putchar('B');
    } else if (x == 1) {
        my_putchar('B');
    } else {
        my_putchar('B');
    }
}

static void top_bottom(int h, int y, int l, int x)
{
    if ((l == 1 && h == 1) || (l == x && h == y)) {
        my_putchar('A');
    } else if ((l == 1 && h == y) || (l == x && h == 1)) {
        my_putchar('C');
    } else {
        my_putchar('B');
    }
}

void middle(int l, int x)
{
    if (l == 1 || l == x) {
        my_putchar('B');
    } else {
        my_putchar(' ');
    }
}

void tb_or_md(int h, int y, int l, int x)
{
    if ((x == 1) || (y == 1)) {
        is_one(h, y, l, x);
    } else if (h == 1 || h == y) {
        top_bottom(h, y, l, x);
    } else {
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
