/*
** EPITECH PROJECT, 2023
** B-CPE-110-STG-1-1-organized-raphael.petrequin
** File description:
** len_args
*/

int len_args(char **args)
{
    int cpt = 0;

    for (int i = 0; args[i] != 0; i++)
        cpt++;
    return cpt;
}
