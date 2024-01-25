/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** my_event
*/

#include <SFML/Graphics.h>

#ifndef MY_EVENT_H_
    #define MY_EVENT_H_

    typedef struct EVENT {
    sfEvent event;
    sfBool in_game;
    sfBool pause;
    sfBool win;
    sfBool lose;

} info_event;

#endif /* !MY_EVENT_H_ */
