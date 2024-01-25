/*
** EPITECH PROJECT, 2023
** MY_PRINT_PARAMS
** File description:
** Displays its arguments
*/

int main(int ac, char **av)
{
    if (ac < 3) {
        return (0);
    }
    for (int i = 0; i < ac; i++) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return (0);
}
