/*
** EPITECH PROJECT, 2023
** MY_REV_PARAMS
** File description:
** Displays its arguments rev
*/

int main(int ac, char **av)
{
    int rev = ac - 1;

    if (ac < 3) {
        return (0);
    }
    for (int i = 0; i < ac; i++) {
        my_putstr(av[rev]);
        my_putchar('\n');
        rev--;
    }
    return (0);
}
