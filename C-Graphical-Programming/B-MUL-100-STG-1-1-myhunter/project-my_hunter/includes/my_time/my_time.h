/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** my_time
*/

#include <SFML/Graphics.h>

#ifndef MY_TIME_H_
    #define MY_TIME_H_

    typedef struct TIME {
    sfClock *clock;
    sfTime time;
    sfTimeSpan time_span;
    float seconds;

} info_time;

#endif /* !MY_TIME_H_ */
