/*
** EPITECH PROJECT, 2023
** MY_SHOW_WORD_ARRAY
** File description:
** Displays the content of an array of words
*/

int my_strtab(char *const *tab)
{
    int res = 0;

    for (int i = 0; tab[i] != 0; i++) {
        res ++;
    }
}

int my_show_word_array(char *const *tab)
{
    int cpt = 0;
    int argc = my_strtab(tab);

    for (int i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}
