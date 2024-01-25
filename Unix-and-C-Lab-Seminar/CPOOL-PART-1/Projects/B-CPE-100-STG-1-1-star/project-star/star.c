/*
** EPITECH PROJECT, 2023
** STAR
** File description:
** Displays a star
*/

static int is_prime(int nb)
{
    if (nb <= 1) {
        return (0);
    }
    if (nb <= 3) {
        return (1);
    } else if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) {
        return (0);
    } else {
        return (1);
    }
}

static void write_line(unsigned int size, int starLenght)
{
    int wing = (2 * size) + 1;
    int hole = starLenght - (2 * wing);

    for (int i = 0; i < wing; i++) {
        my_putchar('*');
    }
    for (int i = 0; i < hole; i++) {
        my_putchar(' ');
    }
    for (int i = 0; i < wing; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

static void write_top(unsigned int size, int midStar, int h, int l)
{
    if (l == midStar && h == 0) {
        my_putchar('*');
        my_putchar('\n');
    } else if (l == (midStar - h) && h != 0) {
        my_putchar('*');
    } else {
        if (l == (midStar + h) && h != 0) {
            my_putchar('*');
            my_putchar('\n');
        } else {
            my_putchar(' ');
        }
    }
}

static void write_wing_start(unsigned int size, int starLength, int h, int l)
{
    if (l == h + 1) {
        my_putchar('*');
    } else {
        if (l == (starLength - h)) {
            my_putchar('*');
            my_putchar('\n');
        } else {
            my_putchar(' ');
        }
    }
}

void write_midtop(unsigned int size, int starLength)
{
    for (int h = 1; h <= size; h++) {
        for (int l = 1; l <= (starLength - h); l++) {
            write_wing_start(size, starLength, h, l);
        }
    }
}

static void write_wing_end(unsigned int size, int starLength, int h, int l)
{
    int wingLeft = size + 1;
    int wingRight = starLength - size;

    if (l == wingLeft - h) {
        my_putchar('*');
    } else {
        if (l == (wingRight + h)) {
            my_putchar('*');
            my_putchar('\n');
        } else {
            my_putchar(' ');
        }
    }
}

void write_midbot(unsigned int size, int starLength)
{
    int wing = starLength - size;

    for (int h = 1; h <= size - 1; h++) {
        for (int l = 1; l <= wing + h; l++) {
            write_wing_end(size, starLength, h, l);
        }
    }
}

void write_bot(unsigned int size, int midStar, int h, int l)
{
    int nb = size * 5;
    int starLenght;
    int hole;

    for (; is_prime(nb) == 0; nb = (nb + 1));
    starLenght = nb;
    hole = starLenght - (2 * ((2 * size) + 1));
    if (l == midStar && h == size - 1) {
        my_putchar('*');
        my_putchar('\n');
    } else if (l == (((2 * size) + 1) + h) && h != size - 1) {
        my_putchar('*');
    } else {
        if (l == (((2 * size) + 1) + hole - h + 1) && h != size - 1) {
            my_putchar('*');
            my_putchar('\n');
        } else {
            my_putchar(' ');
        }
    }
}

void make_loop(unsigned int size, int starLenght, int midStar)
{
    int wing = (2 * size) + 1;
    int hole = starLenght - (2 * wing);

    for (int h = 0; h < size; h++) {
        for (int l = 1; l <= (midStar + h); l++) {
            write_top(size, midStar, h, l);
        }
    }
    write_line(size, starLenght);
    write_midtop(size, starLenght);
    write_midbot(size, starLenght);
    write_line(size, starLenght);
    for (int h = 0; h < size; h++) {
        for (int l = 1; l <= (wing + hole - h + 1); l++) {
            write_bot(size, midStar, h, l);
        }
    }
}

void star(unsigned int size)
{
    int nb = size * 5;
    int starLenght;
    int midStar;

    while (is_prime(nb) == 0) {
        nb = (nb + 1);
    }
    starLenght = nb;
    midStar = ((starLenght / 2) + 1);
    if (size > 0) {
        make_loop(size, starLenght, midStar);
    }
}
