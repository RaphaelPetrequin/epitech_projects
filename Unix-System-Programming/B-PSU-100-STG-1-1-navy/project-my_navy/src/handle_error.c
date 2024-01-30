/*
** EPITECH PROJECT, 2024
** B-PSU-100-STG-1-1-navy-raphael.petrequin
** File description:
** handle_error
*/

#include "../include/my_printf.h"
#include "../include/my_navy.h"

int is_valid_ship(ship_t *ship, char *line, int i)
{
    char token[20];
    size_t position = 0;

    if (!my_strtok(line, token, ':', &position))
        return 84;
    ship->length = my_getnbr(token);
    ship->len_ship[i] = ship->length;
    if (!my_strtok(line, token, ':', &position))
        return 84;
    ship->ipos1 = my_getnbr(token);
    ship->cpos1 = token[0];
    if (!my_strtok(line, token, ':', &position))
        return 84;
    ship->ipos2 = my_getnbr(token);
    ship->cpos2 = token[0];
    if (check_int(ship) == 84 || check_length(ship) == 84
    || check_letter(ship->cpos1, ship->cpos2) == 84)
        return 84;
    return (0);
}

void free_all(FILE *file, char *line)
{
    fclose(file);
    free(line);
}

void last_check(ship_t *ship, int *nb_ship, FILE *file, char *line)
{
    int *check = malloc(sizeof(int) * 5);
    int i = 0;

    check[4] = -1;
    free_all(file, line);
    for (i = 0; ship->len_ship[i] != -1; i++) {
        if (ship->len_ship[i] < 2 || ship->len_ship[i] > 5)
            (*nb_ship) = 0;
        if (i != 0)
            (*nb_ship) = (ship->len_ship[i] == check[i - 1]) ? 0 : (*nb_ship);
        check[i] = ship->len_ship[i];
    }
    free(check);
}

int handle_error(char *filepath)
{
    FILE *file = fopen(filepath, "r");
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    int nb_ship = 0;
    ship_t ship;

    ship.len_ship[4] = -1;
    if (file == NULL)
        return (84);
    read = getline(&line, &len, file);
    for (int i = 0; read != -1 || ship.len_ship[i] != -1; i++) {
        if (line[read - 1] == '\n')
            line[read - 1] = '\0';
        if (is_valid_ship(&ship, line, i) != 84)
            nb_ship++;
        read = getline(&line, &len, file);
    }
    last_check(&ship, &nb_ship, file, line);
    return (nb_ship != 4) ? 84 : 0;
}
