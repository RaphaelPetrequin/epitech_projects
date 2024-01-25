/*
** EPITECH PROJECT, 2023
** RUSH
** File description:
** Display a square
*/

static int is_error(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (0);
}

void top(int h, int y, int l, int x)
{
    if (l == 1) {
        my_putchar('/');
    } else if (l == x) {
        my_putchar('\\');
    } else {
        my_putchar('*');
    }
}

void bottom(int h, int y, int l, int x)
{
    if (l == 1) {
        my_putchar('\\');
    } else if (l == x) {
        my_putchar('/');
    } else {
        my_putchar('*');
    }
}

void middle(int h, int y, int l, int x)
{
    if (l == 1 || l == x) {
        my_putchar('*');
    } else {
        my_putchar(' ');
    }
}

static void t_b_or_md(int h, int y, int l, int x)
{
    if (h == 1) {
        top(h, y, l, x);
    } else if (h == y) {
        bottom(h, y, l, x);
    } else {
        middle(h, y, l, x);
    }
}

void my_for_one(int l, int x)
{
    for (l = 1; l <= x; l++) {
        my_putchar('*');
    }
}

static void if_one(int h, int y, int l, int x)
{
    if (x == 1 && y == 1) {
        my_putchar('*');
        my_putchar('\n');
    }
    if (x == 1) {
        for (h = 1; h <= y; h ++) {
            my_putchar('*');
            my_putchar('\n');
        }
    } else {
        my_for_one(l, x);
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    int h;
    int l;

    if (x == 0 || y == 0) {
        is_error("Invalid size\n");
        return;
    }
    if (x == 1 || y == 1) {
        if_one(h, y, l, x);
        return;
    }
    for (h = 1; h <= y ; h++) {
        for (l = 1; l <= x; l++) {
            t_b_or_md(h, y, l, x);
        }
        my_putchar('\n');
    }
    return;
}
