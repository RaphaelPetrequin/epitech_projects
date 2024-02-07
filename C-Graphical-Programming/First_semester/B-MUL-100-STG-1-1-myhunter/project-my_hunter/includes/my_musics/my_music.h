/*
** EPITECH PROJECT, 2023
** B-MUL-100-STG-1-1-myhunter-raphael.petrequin
** File description:
** my_music
*/

#include <SFML/Audio.h>

#ifndef MY_MUSIC_H_
    #define MY_MUSIC_H_

    typedef struct MUSIC {
    sfMusic *menu_music;
    sfMusic *in_game_music;
    sfMusic *win_music;
    sfMusic *lose_music;
    sfMusic *gun_shot;

} info_music;

#endif /* !MY_MUSIC_H_ */
