/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Shell Boostrap
** File description:
** bootstrap.h
*/

#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

#ifndef BOOTSTRAP_H
    #define BOOTSTRAP_H

typedef enum type {
    ACTUATOR,
    DEVICE,
    PROCESSOR,
    SENSOR,
    WIRE
} type_t;

typedef struct TEMP {
    char *type;
    char *data;
    int id;
} info_tmp;

typedef struct linked_list_s {
    char *type;
    char *data;
    int id;
    struct linked_list_s *next;
} linked_list_t;

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int mini_printf(const char *format, ...);
int my_strcmp(char *s1, char *s2);
int my_getnbr(char *str);
char *my_strdup(char const *src);
int compare_function(int data, int ref);
int len_args(char **args);
int len_list(linked_list_t *list);
void delete_in_list(linked_list_t **begin, int ref);
void push_to_list(linked_list_t **begin, void *type, void *data, int id);
void quick_sort_name(linked_list_t *start, linked_list_t *end);
void quick_sort_type(linked_list_t *start, linked_list_t *end);
void quick_sort_id(linked_list_t *start, linked_list_t *end);

#endif /* BOOTSTRAP_H */
