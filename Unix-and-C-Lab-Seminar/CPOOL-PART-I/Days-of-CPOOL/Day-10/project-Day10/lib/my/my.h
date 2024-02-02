/*
** EPITECH PROJECT, 2023
** MY
** File description:
** Contains the prototypes of the functions exposed by libmy.a
*/

#ifndef MY
    #define MY

int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_getnbr(char *);
int my_isneg(int);
int my_isalpha(char);
void my_putchar(char);
int my_put_nbr(int);
int my_putstr(char const *);
char *my_revstr(char *);
char *my_strcat(char *, char const *);
int my_strcmp(char const *, char const *);
char *my_strcpy(char *, char const *);
int my_strlen(char const *);
char *my_strncat(char *, char const *, int);
char *my_strncpy(char *, char const *, int);
char *my_strstr(char *, char const *);
void my_swap(int *, int *);
int charcomp(char const, char const);
int str_verif(char *, char const *, int, int);
char *create_str(char *, int, int);

#endif /*MY*/
