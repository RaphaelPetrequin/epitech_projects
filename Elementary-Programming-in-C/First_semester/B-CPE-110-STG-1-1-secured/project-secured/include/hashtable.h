/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Secured
** File description:
** hashtable.h
*/

#include <unistd.h>
#include <stdlib.h>

#ifndef HASHTABLE_H
    #define HASHTABLE_H

typedef struct linked_list_s {
    int key;
    char *value;
    struct linked_list_s *next;
} linked_list_t;

typedef struct hashtable_s {
    int (*hash_function)(char *, int);
    linked_list_t **tab_list;
    int len;
} hashtable_t;

// Hash function
int hash(char *key, int len);

// Create & delete hash table
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);

// Handle hash table
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);

// mini_printf
int mini_printf(const char *format, ...);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);

#endif /* HASHTABLE_H */
