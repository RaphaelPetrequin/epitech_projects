/*
** EPITECH PROJECT, 2023
** MY_SWAP
** File description:
** Swaps the content of two int
*/

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}
