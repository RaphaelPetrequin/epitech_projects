/*
** EPITECH PROJECT, 2024
** B-CPE-110-STG-1-1-secured-raphael.petrequin
** File description:
** ht_insert
*/

#include "../../include/hashtable.h"

int verify_input(hashtable_t *ht, char *key, char *value)
{
    if (ht == NULL || key == NULL || value == NULL)
        return 84;
    return 0;
}

int add_element_to_hashtable(hashtable_t *ht, int key_hashed, char *value)
{
    int index = key_hashed % ht->len;
    linked_list_t *element = malloc(sizeof(*element));

    if (element == NULL)
        return 84;
    if (ht->tab_list[index] != NULL) {
        ht->tab_list[index]->value = value;
    } else {
        element->key = key_hashed;
        element->value = value;
        element->next = ht->tab_list[index];
        ht->tab_list[index] = element;
    }
    return 0;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int key_hashed;
    int result;

    if (verify_input(ht, key, value) == 84)
        return 84;
    key_hashed = ht->hash_function(key, ht->len);
    result = add_element_to_hashtable(ht, key_hashed, value);
    return result;
}
